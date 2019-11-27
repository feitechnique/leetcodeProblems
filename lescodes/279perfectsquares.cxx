class Solution 
{
public:
    
    /*
    * i = 1; j = 1; cntPerfectSquares[1] = 0+1=1
    * i = 2; j = 1; c[2] = c[1] + 1 = 2
    * i = 3; j = 1; c[3] = c[2] + 1 = 3
    * i = 4; j = 1; c[4] = c[3] + 1 = 4
    * i = 4; j = 2; c[4] = c[0]+ 1 = 1
    * i = 16; j = 4; c[16] = c[0] + 1 = 1 
    * i = 20 j = 4; c[20] = c[16] + 1 = 2
    */
    int numSquares(int n) 
    {
        if (n <= 0)
        {
            return 0;
        }
        
        // cntPerfectSquares[i] = the least number of perfect square numbers 
        // which sum to i. Note that cntPerfectSquares[0] is 0.
        vector<int> cntPerfectSquares(n + 1, INT_MAX);
        cntPerfectSquares[0] = 0;
        for (int i = 1; i <= n; i++)
        {
            // For each i, it must be the sum of some number (i - j*j) and 
            // a perfect square number (j*j).
            for (int j = 1; j*j <= i; j++)
            {
                cntPerfectSquares[i] = 
                    min(cntPerfectSquares[i], cntPerfectSquares[i - j*j] + 1);
            }
        }
        
        return cntPerfectSquares.back();
    }
};
