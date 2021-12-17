#include <vector>

//Sudoku Solution Validator
bool validSolution(unsigned int board[9][9]) {
    bool isit = true;
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 9; ++j) {
            if (board[i][j] == 0) return false;
        }
    }
    //rows
    for (int i = 0; i < 9; ++i) {
        std::vector <bool> nums = { true,true,true,true,true,true,true,true,true };
        for (int j = 0; j < 9; ++j) {
            nums[board[i][j] - 1] = false;
        }
        for (int j = 0; j < 9; ++j) {
            if (nums[j] == true) return false;
        }
    }
    //cols
    for (int i = 0; i < 9; ++i) {
        std::vector <bool> nums = { true,true,true,true,true,true,true,true,true };
        for (int j = 0; j < 9; ++j) {
            nums[board[j][i] - 1] = false;
        }
        for (int j = 0; j < 9; ++j) {
            if (nums[j] == true) return false;
        }
    }
    //boxes
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::vector <bool> nums = { true,true,true,true,true,true,true,true,true };
            for (int i2 = 0; i2 < 3; ++i2) {
                for (int j2 = 0; j2 < 3; ++j2) {
                    nums[board[i * 3 + i2][j * 3 + j2] - 1] = false;
                }
            }
            for (int j3 = 0; j3 < 9; ++j3) {
                if (nums[j3] == true) return false;
            }
        }
    }
    return isit;
}

int main()
{
    return 0;
}