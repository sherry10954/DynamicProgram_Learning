//
// Created by Sherry Li on 2021/9/4.
//

#ifndef DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
#define DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
#include <vector>
#include <string>

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
    // leetcode 64题
    /*
     * 给定一个包含非负整数的 m x n 网格 grid ，请找出一条从左上角到右下角的路径，使得路径上的数字总和为最小。
     */
    int minPathSum(std::vector<std::vector<int>>& grid);
    // leetcode 72题
    /*
     * 给你两个单词word1 和word2，请你计算出将word1转换成word2 所使用的最少操作数。
     */
    int minDistance(std::string word1, std::string word2);

};
#endif //DYNAMINPROGRAM_LEARNING_DYNAMICSOLVE_H
