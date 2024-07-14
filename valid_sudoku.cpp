// aint workingg
// 14.07.2024 upd : still aint working, but so close (i wanna sleep n' green GH, cuz its 11 52 pm :D)

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
            //int i_cl = i;
            int vertical_n = 0;
            int horizontal_n = 0;


            for (int i_cl = i; i_cl != 0; i_cl = i_cl - 1 ) {
                if (vertical_n == 6) {
                    horizontal_n+=3;
                    vertical_n = 0;
                }
                else {
                    vertical_n+=3;
                }
            }
            for (int k = 0; k != 3; k++) {
                for (int p = 0; p != 3; p++) {
                    if (board[k + horizontal_n][ p + vertical_n] != '.') {
                        if (hMap_cube[board[k+horizontal_n][p+vertical_n]] == false) {
                            hMap_cube[board[k+horizontal_n][p+vertical_n]] = true;
                        }
                    
                        else {
                        //ans = false;
                        return false;
                        }
                    }
                }
            }


                
                


                
            }



        }
       

        return ans;
    }
};
