class FreqStack {
public:   
    unordered_map <int, int> freq_map;
    unordered_map <int, stack<int>> freq_stk;
    int highest_freq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq_map[val]++;
        freq_stk[freq_map[val]].push(val);
        highest_freq=max(highest_freq,freq_map[val]);
    }
    
    int pop() {
        
        int res=freq_stk[highest_freq].top();
        freq_map[res]--;
        freq_stk[highest_freq].pop();
        if(freq_stk[highest_freq].empty())
        {
            highest_freq--;
        }
        return res;
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
