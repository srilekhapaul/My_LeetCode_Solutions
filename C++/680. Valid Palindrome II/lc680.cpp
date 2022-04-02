class Solution {
public:
    bool checkValid(string &s, int start, int end, int & deletedCount)
    {
        if(start>=end)
            return true;
        if(s[start]==s[end])
            return checkValid(s,start+1,end-1,deletedCount);
        if(deletedCount>=1)
            return false;
        deletedCount++;
        return checkValid(s,start+1,end,deletedCount) || checkValid(s,start,end-1,deletedCount);
    }
    bool validPalindrome(string s) {
        int deletedCount=0;
        return checkValid(s,0,s.length()-1,deletedCount);
    }
};
