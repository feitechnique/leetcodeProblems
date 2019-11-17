/*
 * i=1 j=1
 * dp[1][1] = dp[0][1] + dp [1][0] = 2
 * i=1 j=2
 * dp[1][2] = dp[0][2] + dp [1][1] = 3
 * ...
 * dp[m-1][n-1] = dp[m-2][n-1] + dp[m-1][n-2]
 *
 */




class Solution {
public:
    int uniquePaths(int m, int n) {
        //if(m==1&&n ==1) return 1;
        if(m==0&&n==0) return 0;
        vector<vector<int>> dp(m, vector<int>(n,1));
        for(int i=1;i<m;i++)
        {
            for(int j=1;j<n;j++)
            {
                dp[i][j] = dp[i-1][j] + dp[i][j-1];
            }
        }
        return dp[m-1][n-1];
        
    }
};
