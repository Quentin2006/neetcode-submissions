class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int row = board.size();
        int col = board[0].size();

        char nums[9] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};

        for (int index = 0; index < 9; ++index) {
            char num = nums[index];
            // check for duplicate in cols
            for (int r = 0; r < row; ++r) {
                int num_count = 0;
                for (int c = 0; c < col; ++c) {
                    if (board[r][c] == num) 
                        ++num_count;
                    if (num_count >= 2) 
                        return false;
                }
            }

            // check for duplacate in row;
            for (int c = 0; c < col; ++c) {
                int num_count = 0;
                for (int r = 0; r < row; ++r) {
                    if (board[r][c] == num) 
                        ++num_count;
                    if (num_count >= 2) 
                        return false;
                }
            }

            // check for duplicate in sub square

            // iterates through each sub square
            for (int ssx = 0; ssx < 3 ; ++ssx) {
                for (int ssy = 0; ssy < 3 ; ++ssy) {
                    // initlizes num count for ssx, ssy subsquare
                    int num_count = 0;
                    // iterates through sub square row
                    for (int r = ssx * 3; r < ssx * 3 + 3; ++r) {
                        // ierates thoguh subsqure col
                        for (int c = ssy * 3; c < ssy * 3 + 3; ++c) {
                            if (board[r][c] == num) 
                                ++num_count;
                            if (num_count >= 2) 
                                return false;
                        }
                    }
                }
            }

        }

        return true;
    }
};
