class Solution {
public:
    bool reorderedPowerOf2(int n) {
        vector <long> power2list;
        for( int i=0;i<32;i++)
        {
            power2list.push_back(pow(2,i));
        }
        vector <string> power2StrList;
        for (auto x : power2list)
        {
            string xStr=to_string(x);
            sort(xStr.begin(),xStr.end());                
            power2StrList.push_back(xStr);
        }
        string nStr= to_string(n);
        for (auto s: power2StrList )
        {
            sort(nStr.begin(),nStr.end());
            if(nStr==s)
                return true;
        }
        return false;
    }
};
