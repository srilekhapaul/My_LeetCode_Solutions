class Solution {
public:
    void findComb(vector <vector<int>> & result, vector <int> comb, int num,int k, int target)
    {
        if(target<0 or comb.size()>k)
            return;
        if(target==0 and comb.size()==k)
        {
            result.push_back(comb);
            return;
        }
        for(int i=num;i<=9;i++)
        {
            comb.push_back(i);
            findComb(result, comb, i+1, k,target-i);
            comb.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        
        vector <vector<int>> result;
        findComb(result, {}, 1, k,n);
        return result;
    }
};

