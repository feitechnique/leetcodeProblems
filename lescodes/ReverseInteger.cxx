class Solution {
public:
    int reverse(int x) {
        vector<long> result;
        bool flag=true;
        long res=0;
        if(x<-(pow(2,31)-1))
            return 0;
        if(x<0)
        {
            x = abs(x);
            flag = false;
        }
        while(x>0)
        {
            result.push_back(x%10);
            x = x/10;
        }
        // 3 2 1
        // 3*100 + 2* 10 + 1
        for(int i=0;i<result.size();i++)
        {
            res += result[i]*pow(10, result.size()-i-1);
        }
        if(flag == false)
            res = -res;
        if(res > pow(2,31)-1|| res<-(pow(2,31)-1) )
            return 0;
        return res;
    }
};
