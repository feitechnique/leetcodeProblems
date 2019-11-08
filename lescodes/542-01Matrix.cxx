class Solution {
public:
    int findnearestzero(vector<vector<int>>& matrix, int i , int j, int result){
        result ++;
        int flat = result;
        //boundary check
        int left=1, right =1, up = 1, down =1;
        if(i == 0 )
            up = 0;
        if(j == 0)
            left = 0;
        if(i == matrix.size()-1)
            down = 0;
        if(j == matrix[0].size()-1)
            right = 0;
        if(matrix[i+right][j]==0 || matrix[i][j+down]==0||matrix[i-left][j]==0||matrix[i][j-up]==0)
        return result;
        else 
        {

            int results[4];
            results[0]= findnearestzero(matrix, i+right,j, flat);
            results[1]= findnearestzero(matrix, i, j+down, flat);
            results[2]= findnearestzero(matrix, i-left, j, flat);
            results[3]= findnearestzero(matrix, i, j-up, flat);
            int resultR = 1;
            for(int k=0;k<4;k++)
            {
                if(resultR>results[k])
                    resultR=results[k];
            }
            return resultR;
        }
                                         
    }
    
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        cout <<matrix.size()<<endl;
        cout << matrix[0].size()<<endl;
        int result=0;
        vector<vector<int>> resultM;
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[0].size();j++)
            {
                if(matrix[i][j]==0)
                {
                    resultM[i][j] = 0;
                    continue;
                }
                else
                resultM[i][j] = findnearestzero(matrix, i,j,result);

            }
        }
        return resultM;
    }
};
