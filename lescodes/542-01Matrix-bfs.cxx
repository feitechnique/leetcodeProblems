class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        
        int maxD = matrix.size()+matrix[0].size();
        //cout<<matrix.size()<<endl<<matrix[0].size();
        
        queue<pair<int, int>> m_q;
        for(int i=0;i<matrix.size();i++)
            for(int j=0;j<matrix[0].size();j++)
                matrix[i][j] == 0 ? m_q.push(make_pair(i, j)) : (void)(matrix[i][j] = maxD);
        int dirt[4][2] = {1, 0, -1, 0, 0, 1, 0,-1};
        while(!m_q.empty()){
            pair<int, int> thisp = m_q.front();
            m_q.pop();
            int x = thisp.first, y = thisp.second;
            cout<<x<<y<<endl;
            for(int d=0;d<4;d++)
            {
                int x1 = x+dirt[d][0], y1 = y+dirt[d][1];
                if(x1>=0 && x1<matrix.size() && y1>=0 && y1<matrix[0].size())
                {
                    if(matrix[x1][y1] == maxD) m_q.push(make_pair(x1,y1));
                    matrix[x1][y1] = min(matrix[x1][y1], matrix[x][y] + 1);
                }
            }
         }
        return matrix;
    }
};
