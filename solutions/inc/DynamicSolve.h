//
// Created by Sherry Li on 2021/9/4.
//

#ifndef DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
#define DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
#include <vector>
class DynamicSolve{
public:
    // 青蛙每次可以跳一个或者两个台阶，一共有n个台阶，计算一共有多少种跳法。
    int FrogJump(const int &stepNum);
    // leetcode 62题
    /*
     * 一个机器人位于一个 m x n网格的左上角 （起始点在下图中标记为 “Start” ）。
     * 机器人每次只能向下或者向右移动一步。机器人试图达到网格的右下角（在下图中标记为 “Finish” ）。
     * 问总共有多少条不同的路径？
     */
    int uniquePaths(int m, int n);
    int minPathSum(std::vector<std::vector<int>>& grid);

};
#endif //DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
