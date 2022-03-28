class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int pivot=-1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<nums[i-1])
                pivot=i;
        }
        if(pivot>-1)
        {
            if(target>=nums[0])
                 return binary_search(nums.begin(), nums.begin()+pivot,target);            
            else
                 return binary_search(nums.begin()+pivot, nums.end(),target);            
        }
        else
             return binary_search(nums.begin(), nums.end(),target);
    }
};
