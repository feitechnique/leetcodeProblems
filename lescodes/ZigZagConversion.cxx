class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;
        string subs[numRows];
        int row=0;
        int flag = 1;
        for(int i=0;i<s.size();i++)
        {
            subs[row] += s[i];
            if(row == 0)
                flag = 1;
            if(row == numRows -1)
                flag = -1;
            row += flag;
            
            
        }
        string result = "";
        for(int i=0;i<numRows;i++)
        {
            result.append(subs[i]);
        }
        return result;
        
    }
};
