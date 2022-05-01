class Solution {
public:
    bool backspaceCompare(string s, string t) {

        stack <char> sStack, tStack;
        for(char c: s)
        {
            if(c=='#' && (!sStack.empty()))
               sStack.pop();
            else if(c!='#')
               sStack.push(c);                
        }
        for(char d: t)
        {
            if(d=='#' && (!tStack.empty()))
               tStack.pop();
            else if(d!='#')
               tStack.push(d);                
        }
        
        if(sStack==tStack)
            return true;
        return false;
    }
};
