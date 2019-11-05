# leetcodeProblems
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
----

Runtime: 4 ms, faster than 78.88% of C++ online submissions for 1-bit and 2-bit Characters.
Memory Usage: 8.7 MB, less than 100.00% of C++ online submissions for 1-bit and 2-bit Characters.
Next challenges: 

----
