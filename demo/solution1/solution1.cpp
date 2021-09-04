#include <iostream>
#include "DynamicSolve.h"
using namespace std;
int main() {
    std::cout << "第一题：calculate frog jump ways: ";
    int stepNum = 10;
    DynamicSolve DP;
    cout << "Jump " << stepNum << " steps has "
    << DP.FrogJump(stepNum) << " ways." << endl;
    int m = 10;
    int n = 10;
    cout << "leetcode 62题： 机器人位于一个 " << m << "x" << n << " 网格的左上角到右下角一共："
    << DP.uniquePaths(m, n) << "条不同的路径。" << endl;

    cout << "给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。" << endl;

    int grid_array[3][3] = { {1,3,1},{1,5,1},{4,2,1}};
    std::vector<std::vector<int>> grid(3, vector<int>(3));
    for (int i = 0; i<3; i++){
        for (int j = 0; j<3; j++){
            grid[i][j] = grid_array[i][j];
        }
    }
    cout << 3 << "x" << 3 << " 网格的最小数字是： " << DP.minPathSum(grid) << endl;

    return 0;
}
