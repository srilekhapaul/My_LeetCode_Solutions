class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack <int> stk;
        int i=0,j=0;
        for(i=0;i<pushed.size();i++)
        {
            stk.push(pushed[i]);
            while(!stk.empty() && stk.top()==popped[j])
            {
                stk.pop();
                j++;
            }
        }
        if(j==popped.size())
            return true;
        return false;
               
    }
};


    
