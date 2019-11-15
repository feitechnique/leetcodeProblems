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


class Solution {
public:
    bool isMatch(string s, string p) {
    vector<vector<bool>> dp(s.size()+1, vector<bool>(p.size()+1,false));
    dp[0][0] = true;
    if(s.size()==0&&p.size()==1)
	if(p[0]=='*')					
		dp[0][1]=true;
    for(int i=1;i<=s.size();i++){
	    for(int j=1;j<=j.size();j++){
	    if(s[i-1]==p[j-1] || p[j-1] == '.'){
		    dp[i][j] = dp[i-1][j-1];
		    else if(p[j-1] == '*'){
		    if(p[j-2] != s[i-1]&&p[j-2]!='.'){
			    dp[i][j] = dp[i][j-2];
		    }
		    else{
			    dp[i][j] = (dp[i][j-2]||dp[i][j-1]||dp[i-1][j]);
		    }
		    }
	    }

	   
	    }


    }
    }
}

