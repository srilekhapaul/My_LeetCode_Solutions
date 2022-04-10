class Solution {
public:
    int calPoints(vector<string>& ops) {
        int sumScore=0;
        vector <int> nums;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                nums.push_back(nums[nums.size()-1]+nums[nums.size()-2]);                
                sumScore+=nums[nums.size()-1]; 
            }
            else if(ops[i]=="D")
            {
                nums.push_back(nums[nums.size()-1]*2);                
                sumScore+=nums[nums.size()-1]; 
            }
            else if(ops[i]=="C")
            {                
                sumScore=sumScore-nums[nums.size()-1];
                nums.pop_back();     
            }
            else
            { 
                nums.push_back(stoi(ops[i]));
                sumScore+=nums[nums.size()-1];
            }            
        }
        return sumScore;
    }
};
