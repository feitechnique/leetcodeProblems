class Solution {
public:
    int myAtoi(string str) {
        bool flag = true;
        bool finded = false;
        long result=0;
        for(int i=0;i<str.size();i++)
        {
            if(str[i]==' ')
            {cout <<"space";
                continue;}
            if(str[i] == '-')
            {
                i = i+1;
                flag = false;
                while(str[i]>='0' && str[i] <= '9')
                {
                    result = result*10 + (str[i]-'0');
                    if(-result<INT_MIN)
                        return INT_MIN;
                    i++;       
                }
                if (-result <INT_MIN)
                    return INT_MIN;
                return -result;
            }
           if(str[i]=='+')
            {
             while(str[i+1]>='0' && str[i+1] <= '9')
            {
                result = result*10 + (str[i+1]-'0');
                i++;
                if(result>INT_MAX)
                    return INT_MAX;
                finded = true; 
            }
            if(finded==true)
                break;
            return result;
            }
             while(str[i]>='0' && str[i] <= '9')
            {
                result = result*10 + (str[i]-'0');
                if(result > INT_MAX)
                    return INT_MAX;
                i++;
                finded = true; 
            }
            if(finded==true)
                break;
            return result; 
            if(str[i]>'9' || str[i] <'0')
                return 0;


        }
        if(result > INT_MAX)
        return INT_MAX;
        return result;
    }
};
