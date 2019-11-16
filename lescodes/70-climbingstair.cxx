/* 
 * dynamic programming
 * the key intuition is to know this question can be solved by 2 sub question, if we want to know the 
 * steps to reach n-1 and n-2 repectively, denoted as n1 and n2, then the total ways of steps to reach
 * n is n1+n2
 * given the above intuition, we can construct an dp vector to store ways to get to the top from 0->n
 *
 */

class Solution {
public:
    int climbStairs(int n) {
        if(n == 1) return 1;
        if(n == 2) return 2;
        vector<int> dp(n+1);
        dp[0] = 0;
        dp[1] = 1;
        dp[2] = 2;
        for(int i=3;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-2];
        }
        return dp[n];
            
    }
};
