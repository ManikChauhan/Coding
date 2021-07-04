class Solution {
public:
    string truncateSentence(string s, int k) {
        vector<string> v;
        string s1,s2;
        int i,z=0;
        for(i=0;i<=s.size();i++)
        {
            if(z<k){
            if(s[i]!=' ')
            {
                s1 = s1+s[i];
            }
            else if(s[i]==' '||i==s.size()){
                s1 = s1+' ';
                z++;
            }
            }
        s1.pop_back();
        return s1;
    }
};