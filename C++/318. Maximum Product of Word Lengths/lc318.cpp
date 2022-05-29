class Solution {
public:
    int maxProduct(vector<string>& words) {
        int maxProd=0;
        vector <bitset<26>> bset(words.size());
        for (int i=0;i<words.size();i++)
        {            
            for(char ch: words[i])
                bset[i][ch-'a']=1;
            for(int j=0;j<i;j++)
            {   int k=0;
                for(;k<26;k++)
                {
                    if(bset[i][k] && bset[j][k])
                        break;
                }            
                if(k<26)
                    continue;
                maxProd=max(maxProd, int(words[i].length()*words[j].length() ));
            }
        }
        return maxProd;
    }
};
