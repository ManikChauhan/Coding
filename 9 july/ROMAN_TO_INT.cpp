class Solution {
public:
    int romanToInt(string s) {
        int n=s.size(),sum=value(s[n-1]);
        for(int i=n-2;i>=0;i--){
            if(value(s[i])<value(s[i+1]))
                sum-=value(s[i]);
            else
                sum+=value(s[i]);
        }
        return sum;
    }
    int value(char ch) {
        switch(ch) {
                case'I': return 1;
                    break;
                case'V': return 5;
                    break;
                case'X': return 10;
                    break;
                case'L': return 50;
                    break;
                case'C': return 100;
                    break;
                case'D': return 500;
                    break;
                case'M': return 1000;
                    break;
            }
        return -1;
    }
};
