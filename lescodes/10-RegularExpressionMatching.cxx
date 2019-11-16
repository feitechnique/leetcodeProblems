/*
 * DYNAMIC PROGRAMMING IS USED TO REDUCE DIMENSION(REDUCE THE COMPLEXITY)
	---COUNTING STEP
	---OPTIMIZATION

	DP AND RECURSION
 * Requirement of DP:
 * optimal substructure : optimal solutions to the sub-problems
 * overlapping sub-problems exponential -> polynomial
 * no fater effect
 * 
 * top down 
 * recursion with memoization
 * bottom up
 DP
 *
 * dp[s.size()+1][p.size()+1]
 * dp[i][j]
 *  match s length from 0-i to p length from 0-j
 * s: aa
 * p: a*
 */


/*
DYNAMIC PROGRAMMING IS USED TO REDUCE DIMENSION(REDUCE THE COMPLEXITY)
---COUNTING STEP
---OPTIMIZATION

DP AND RECURSION
* aab
* c*a*b
*  i=1 j =1 ; i=1 j=2; i =1 j=3;
*  a c dp(1,1) = f ; a * dp(1,2) = dp(1,0) = false; a a dp(1,3) = dp(0, 2) = TRUE;
*  i = 1 j = 4 ; i = 1 j = 5; 
   i = 2 j =1 ; i = 2 j = 2
   a c dp(2,1) = f; a *; 
*  a * dp(1,4) = dp(1,3) = false; a b dp(1,5) = false; dp(2,2) = d(0,2)
  i = 2 j = 4;
  a * dp(2,4) = (dp(2,2)||dp(2,3)||dp(1,4)) = true;
  i = 3 j = 5;
  b b dp(3,5) = dp(2,4) = true


* T 0 a a b
* 0 T F F F
  c F F F 
* * T F F
* a F T F
* * T F T
* b F F   
*/
class Solution {
public:
    bool isMatch(string s, string p) {
    int len1 = s.size();
    int len2 = p.size();
    vector<vector<bool>> dp(len1+1, vector<bool>(len2+1,false));
    dp[0][0] = true;
    if(p[0] == '*')
    {
        dp[0][1] = true;
    }
    for(int i=2; i<=len2;i++){
        if(p[i-1]=='*')
            dp[0][i] = dp[0][i-2];
        //cout<<i<<dp[0][i]<<endl;
    }
    for(int i=1;i<=len1;i++){
            for(int j=1;j<=len2;j++){
            if(s[i-1]==p[j-1] || p[j-1] == '.'){
                    dp[i][j] = dp[i-1][j-1];
                }
            else if(p[j-1] == '*')
                {
                    if(p[j-2] != s[i-1]&&p[j-2]!='.'){
                        dp[i][j] = dp[i][j-2];
                        }
                    else{
                            dp[i][j] = (dp[i][j-2]||dp[i][j-1]||dp[i-1][j]);
                        }
                }
            }
        }
        cout<<len1<<len2<<dp[len1][len2]<<endl;
        cout<<dp[0][4];
        return dp[len1][len2];
    }
       
};

