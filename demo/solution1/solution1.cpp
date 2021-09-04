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

    return 0;
}
