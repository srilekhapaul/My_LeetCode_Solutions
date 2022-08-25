class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map <char, int> rMap,mMap;
        for (auto r: ransomNote)
        {
            rMap[r]++;
        }
        for (auto m: magazine)
        {
            mMap[m]++;
        }
        for (auto it=rMap.begin();it!=rMap.end();it++)
        {
            if(it->second >mMap[it->first])
                return false;
        }
        return true;
        
    }
};
