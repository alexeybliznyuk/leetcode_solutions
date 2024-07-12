// aint workingg



class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool ans = true;
        for (int i = 0; i != 9; i++) {
            std::unordered_map <char , bool > hMap_row;
            std::unordered_map <char, bool> hMap_column;
            std::unordered_map <char, bool> hMap_cube;
            for (int j = 0; j != 9; j++) {
                if (board[i][j] != '.') {
                    if (hMap_row[board[i][j]] == false) {
                        hMap_row[board[i][j]] = true;
                    }
                    else {
                        //ans = false;
                        return false;
                    }

                }
                if (board[j][i] != '.') {
                    if (hMap_column[board[j][i]] == false) {
                        hMap_column[board[j][i]] = true;
                    }
                    else {
                        //ans = false;
                        return false;
                    }
                }
            int i_cl = i;
            int r_kef = 0;
            int l_kef = 0;
            
            while (i_cl >= 0) {

                
                r_kef+=3;
                i_cl = i_cl - 1;

                if (i_cl >= 0) {
                    l_kef+=3;
                    i_cl = i_cl - 1;
                }

                
            }
            int l = 0;
            int r = 0;
            while (l != 3 && r != 3) {
                    if (board[l+l_kef][r+r_kef] != '.') {
                    if (hMap_cube[board[l+l_kef][r+r_kef]] == false) {
                        hMap_cube[board[l+l_kef][r+r_kef]] = true;
                    } 
                    else {
                        return false;
                    }
                }
            }
                


                
                


                
            }



        }
       

        return ans;
    }
};
