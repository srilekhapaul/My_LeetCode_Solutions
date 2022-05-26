class Solution {
public:
    int hammingWeight(uint32_t n) {
        bitset <32> bSet(n);
        return bSet.count();
    }
};
