class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map <int, int> freqMap;
        int count=0;
        
        for(int i=0;i<nums.size();i++)
            freqMap[nums[i]]++;
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==k-nums[i])
            {
                if(freqMap[nums[i]] >=2)
                {   count++;
                    freqMap[nums[i]]--;
                    freqMap[k-nums[i]]--;
                }
            }
            else
            {
                if(freqMap[nums[i]] and freqMap[k-nums[i]])
                {   
                    count++;
                    freqMap[nums[i]]--;
                    freqMap[k-nums[i]]--;
                }
            } 
                
        }
        return count;
    }
};
