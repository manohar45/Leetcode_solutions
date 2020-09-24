class Solution {
public:
    int romanToInt(string s) {
        int num[128];
        
        num['I']=1;
        num['V']=5;
        num['X']=10;
        num['L']=50;
        num['C']=100;
        num['D']=500;
        num['M']=1000;
        
        int res=0;
        for(int i=0;i<s.size();i++)
        {
            if(i+1<s.size() && num[s[i+1]]>num[s[i]])
            {
                res=res-num[s[i]];
            }
            else
            {
                res=res+num[s[i]];
            }
        }
        return res;
        
    }
};