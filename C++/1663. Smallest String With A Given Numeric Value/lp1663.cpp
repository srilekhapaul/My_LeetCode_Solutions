class Solution {
public:
    string getSmallestString(int n, int k) {
        string res;
        for(int i=0;i<n;i++)
        {
            res.push_back('a');
            k--;
        }
        for(int i=n-1;i>=0;i--)
        {
            if(k<=25)
            {
                res[i]+=k;
                k=k-25;
                break;
            }
            else if(k>25)
            {
                res[i]+=25;
                k=k-25;
            }
        }
        return res;
    }
};
