class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack <pair<char,int>> countStack;
        int prevCount=0;
        for(int i=0;i<s.length();i++)
        {   if(countStack.empty())
            {
                prevCount=1;
                countStack.push({s[i],prevCount});
            }
            else
            {
                if(s[i]==countStack.top().first)
                {
                    prevCount=countStack.top().second;
                    prevCount++;
                    countStack.push({s[i],prevCount});
                }
                else
                {
                    prevCount=1;
                    countStack.push({s[i],prevCount});
                }
                
            }
            if(prevCount==k)
            {
                while(prevCount--)
                    countStack.pop();
            }              
        }
        string res;
        while(!countStack.empty())
        {
            res.push_back(countStack.top().first);
            countStack.pop();
        }
        reverse(res.begin(), res.end());
        return res;
            
    }
};
