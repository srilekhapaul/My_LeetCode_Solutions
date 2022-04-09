class customComp //for sorting by second of pair ie. frequency
{
    public:
    bool operator()(pair<int,int> a, pair<int,int> b)
    {
        if(a.second<b.second)
            return true;
        return false;
    }
};
class Solution {
public:

    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int,int> freqNums;
        priority_queue <pair<int,int>, vector <pair<int,int>>, customComp> pqNums;
        vector <int> result;
        for(int i=0;i<nums.size();i++) //storing frequency of elements in an unordered_map
        {
            freqNums[nums[i]]++;
        }
        for (auto x : freqNums)   //inserting into priority queue (max-heap by frequency)
        {
            pqNums.push(x);
        }
        while(k--) //extract top k elements from heap
        {
            result.push_back(pqNums.top().first); 
            pqNums.pop();
        }
        return result;
    }
};
