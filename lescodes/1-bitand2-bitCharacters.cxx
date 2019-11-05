class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool flag;
        for(int i=0;i<bits.size();i++)
        {
                
            if(bits[i]==0)
            {flag = true;
                continue;}
            else if(bits[i]==1)
            {i ++;
                flag = false;}
         }
        return flag;
       
    }
};
