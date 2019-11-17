/*
* n = 4
* layer =2 i =0 ; i=1 ;i=2
* minlen[0] = 7 ; min[1] = 1+5 =6; min[2] = 3+7=10
 layer =1 i=0; i=1
  min[0] = 6+3=9; min[1] = 6+4 = 10
  lay = 0 i =0 ; i=1
  min[0] = 9+2= 11; min[1] = 10+2 =12;

*/

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
     int n = triangle.size();
    vector<int> minlen(triangle.back());
    for (int layer = n-2; layer >= 0; layer--) // For each layer
    {
        for (int i = 0; i <= layer; i++) // Check its every 'node'
        {
            // Find the lesser of its two children, and sum the current value in the triangle with it.
            minlen[i] = min(minlen[i], minlen[i+1]) + triangle[layer][i]; 
            cout<<minlen[i]<<' '<<endl;
        }
    }
    return minlen[0];
}
    
};
