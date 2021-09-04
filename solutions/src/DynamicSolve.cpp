//
// Created by Sherry Li on 2021/9/4.
//

#include "DynamicSolve.h"
using namespace std;
int DynamicSolve::FrogJump(const int &stepNum) {
    if (stepNum < 1) return 0;
    if (stepNum == 1) return 1;
    if (stepNum == 2) return 2;
    int res;
    int dp_1 = 1;
    int dp_2 = 2;
    for (int i = 3; i < stepNum + 1; i++){
        res = dp_1 + dp_2;
        dp_1 = dp_2;
        dp_2 = res;
    }
    return res;
}

int DynamicSolve::uniquePaths(int m, int n) {
    if (m < 1 || n < 1) return 0;
    if (m == 1) return 1;
    if (n == 1) return 1;
    std::vector<int> dp(n, 1);
    for (int i = 1; i < m; i++){
        for (int j = 0; j < n; j++){
            if (j == 0) {
                dp[j] = dp[j];
            } else{
                dp[j] = dp[j] + dp[j-1];
            }

        }
    }
    return dp[n-1];
}

int DynamicSolve::minPathSum(std::vector<std::vector<int>> &grid) {
    if (grid.empty()) return 0;
    unsigned int rows = grid.size();
    unsigned int cols = grid[0].size();
    vector<int> dp(cols, 0);
    for (int i = 0; i < rows; i++){
        if (i == 0){
            for (int j = 0; j < cols; j++){
                if (j == 0){
                    dp[j] = grid[0][0];
                } else{
                    dp[j] = dp[j-1] + grid[0][j];
                }
            }
        } else{
            for (int j = 0; j < cols; j++){
                if (j == 0){
                    dp[j] += grid[i][0];
                } else{
                    dp[j] = dp[j-1] < dp[j] ?
                            dp[j-1] + grid[i][j] : dp[j] + grid[i][j];
                }
            }
        }
    }
    return dp[cols - 1];
}

int DynamicSolve::minDistance(std::string word1, std::string word2) {
    unsigned int m = word1.length();
    unsigned int n = word2.length();
    vector<int> dp(n+1, 0); // m = 0;
    for (int j = 0; j <= n; j++){
        dp[j] = j;
    }
    int dp_pre = 0;
    for (int i = 1; i <= m; i++){
        dp_pre = dp[0];
        dp[0] = i;
        for (int j = 1; j <= n; j++){
            int temp_pre = dp[j];
            int temp_min = dp[j-1] < dp[j] ? dp[j-1] : dp[j];
            dp[j] = temp_min < dp_pre ? temp_min : dp_pre;
            if (word1[i-1] != word2[j-1]){
                dp[j] += 1;
            } else{
                dp[j] = dp_pre;
            }
            dp_pre = temp_pre;
        }
    }
    return dp[n];
}
