class KthLargest {
public:
    priority_queue <int,vector <int>,greater<int>> pqNums;    
    int k;
    KthLargest(int k, vector<int>& nums) {
        pqNums=priority_queue <int,vector <int>,greater <int>> (nums.begin(),nums.end());  
        this->k=k;
        while(pqNums.size()>k)
            pqNums.pop();
    }
    
    int add(int val) {
        pqNums.push(val);
        if(pqNums.size()>k)
            pqNums.pop();
        return pqNums.top();
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
