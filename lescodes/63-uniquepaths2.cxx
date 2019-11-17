/*
* test: 
* i=1,j=1;
* obstacleGrid[0][0] = 0 dp[1][1] = 1;
* i=1,j=2;
* obstacleGrid[0][1] = 0 dp[1][2] = dp[0][2] + dp[1][1] = 1;
* i=1,j=3
* ob[0][2] = 0 dp[1][3] = dp[0][3]+dp[1][2] = 1 
* i=2,j=1
* ob[1][0] = 0 dp[2][1] = dp[1][1]+dp[1][0] = 1
* i=2,j=2
* ob[1][1] = 1 dp[2][2] = 0
* i=2,j=3 
  ob=0 dp[2][3] = dp[1][3]+dp[2][2] = 1;
* dp= 0 1 0 0
      0 1 1 1
      0 1 0 1
      0 1 1 2
* 
*/


class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if(m==0&&n==0) return 0;
        vector<vector<long>> dp(m+1, vector<long>(n+1, 0));
        dp[0][1] = 1;
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(obstacleGrid[i-1][j-1]!=1)
                dp[i][j] = dp[i-1][j]+ dp[i][j-1];
            }
        }
        return dp[m][n];
        
    }
};
