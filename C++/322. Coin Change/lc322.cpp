class Solution {
public:
    int coinChangeRecurse(vector<int>& coins, int amount, int maxCoinIdx, vector <vector<int>> & dpMem)
    {
        if(dpMem[amount][maxCoinIdx]!=-1)
            return dpMem[amount][maxCoinIdx];
        if(amount==0)
            return dpMem[amount][maxCoinIdx]=0;
        if(maxCoinIdx==0)
            return dpMem[amount][maxCoinIdx]=INT_MAX-1;
        if(coins[maxCoinIdx-1]>amount)
            return dpMem[amount][maxCoinIdx]=coinChangeRecurse(coins,amount, maxCoinIdx-1,dpMem);
        else
            return dpMem[amount][maxCoinIdx]=min(1+coinChangeRecurse(coins,amount-coins[maxCoinIdx-1], maxCoinIdx,dpMem), coinChangeRecurse(coins,amount, maxCoinIdx-1,dpMem));
    }
    int coinChange(vector<int>& coins, int amount) {
        
        vector <vector<int>> dpMem(amount+1,vector <int> (coins.size()+1,-1) );
        int minCoins=coinChangeRecurse(coins, amount, coins.size(),dpMem);
        if(minCoins==INT_MAX-1)
            return -1;
        return minCoins;
        
    }
};
