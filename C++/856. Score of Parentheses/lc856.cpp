class Solution {
public:
    int scoreOfParentheses(string s) {
        stack <int> stk;
        int res=0;
        char last_seen='(';
        
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='(')
            {
                if(stk.empty())
                    stk.push(1);
                else
                    stk.push(stk.top()*2);
                last_seen='(';
            }                
            else if (s[i]==')')
            {
                if(last_seen!=')')
                {
                    res+=stk.top();
                }                                                
                last_seen=')';
                stk.pop();                
            }
        }
        return res;
    }
};
