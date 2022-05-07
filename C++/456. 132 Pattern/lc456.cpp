class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        stack <int> st;
        vector <int> res;
        for(int i=nums.size()-1;i>=0;i--)
        {
            while(!st.empty() and st.top()<nums[i])
            {             
                res.push_back(st.top());
                st.pop();                
            }
            st.push(nums[i]);
        }
        while(!st.empty())
        {
            res.push_back(st.top());
            st.pop();
        }
        sort(nums.begin(), nums.end()) ;
        if(nums==res)
            return false;
        return true;
    }
};
