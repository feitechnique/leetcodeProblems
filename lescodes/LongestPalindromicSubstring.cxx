#include <stdio>
class Solution {
public:
    bool findRepeat(string substr, char chara)
    {
        for(int i=0;i< substr.length();++i)
        {
            if(substr[i] == chara)
                return true;
        }
        return false;
    }
    int lengthOfLongestSubstring(string s) {
        if(s.empty())
            return 0;
        int chNum = s.length();
        int longest=1;
        for(int i =0;i<chNum;i++)
        {
            string substr;
            substr.push_back(s[i]);
            for(int j=i+1;j<chNum;j++)
            {
                if(findRepeat(substr,s[j]))
                {longest = (longest > substr.length()) ? longest : substr.length();
                break;}
                else
                substr.push_back(s[j]);
                longest = (longest > substr.length()) ? longest : substr.length();

             }
        }
        return longest;
        
    }
};
