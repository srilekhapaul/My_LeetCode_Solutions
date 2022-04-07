class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue <int> stones_pq(stones.begin(),stones.end());
        while(stones_pq.size()>1)
        {
            int x=stones_pq.top();
            stones_pq.pop();
            int y=stones_pq.top();
            stones_pq.pop();
            if(x!=y)
                stones_pq.push(abs(x-y));
                
        }
        if(!stones_pq.empty())
            return stones_pq.top();
        return 0;
    }
};
