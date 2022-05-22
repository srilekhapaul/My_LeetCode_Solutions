class Solution {
public:
    int countSubstrings(string s) {
        int countPalindrome=0;
        for(int i=0;i<s.length();i++)
        {
            for(int p=i,q=i;p>=0 and q<=s.length() and s[p]==s[q];p--,q++) //odd length substrings
            {
                if(s[p]==s[q])
                    countPalindrome++;
            }
            for(int p=i,q=i+1;p>=0 and q<=s.length() and s[p]==s[q];p--,q++) //even length substrings
            {
                if(s[p]==s[q])
                    countPalindrome++;
            }  
        }
        return countPalindrome;
    }
};
