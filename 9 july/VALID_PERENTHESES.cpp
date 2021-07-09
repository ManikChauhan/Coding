class Solution {
public:
    bool isValid(string str) {
        unordered_map<char,char>m;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        stack<char>s;
        for(char ch:str){
            if(m.find(ch)!=m.end())
                s.push(ch);
            else if(!s.empty()&&m[s.top()]==ch)
                s.pop();
            else 
                return false;
        }
        return s.empty();
    }
};
