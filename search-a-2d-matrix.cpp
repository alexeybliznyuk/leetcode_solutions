class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int u = 0;
        int d = matrix.size() - 1;
        int line = 0;
        while (u <= d) {
            int m = (u + d) / 2;

            if (matrix[m][0] > target) {
                d = m - 1;
            }
            else if (matrix[m][0] < target) {
                u = m + 1;
                line = max(line, m);
            }
            else if (matrix[m][0] == target) {
                return true;
            }
        }
        int l = 0;
        int r = (matrix[line]).size() - 1;
        //int mid = l + r /2;
        while (l <= r) {
            int mid = (l + r) /2;
            if (matrix[line][mid] > target) {
                r = mid - 1;

            }
            else if (matrix[line][mid] < target) {
                l = mid + 1;
            }
            else if (matrix[line][mid] == target) {
                return true;
            }

        }
        
        std::cout << r;
        std::cout << line;
        return false;
    }
};
