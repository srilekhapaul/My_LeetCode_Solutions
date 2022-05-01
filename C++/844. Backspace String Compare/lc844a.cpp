class Solution {
public:
    bool backspaceCompare(string s, string t) {
        for(int i=0;i<s.length();i++)
        {   
            if(s[i]=='#' and i>0)
            {
                s.erase(i-1,2);                
                i-=2;
            }
            else if(s[i]=='#')
            {
                s.erase(i,1);                
                i--;
            }
            if(s.empty())
                break;
        }
        for(int i=0;i<t.length();i++)
        { 
            if(t[i]=='#' and i>0)
            {
                t.erase(i-1,2);                
                i-=2;
            }
            else if(t[i]=='#')
            {
                t.erase(i,1);                
                i--;
            }
            if(t.empty())
                break;
        }
        if(s==t)
            return true;
        return false;
    }
};
