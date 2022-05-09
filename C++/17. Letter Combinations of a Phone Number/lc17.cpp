class Solution {
public:
    
    void findComb (vector<string> & mappings, vector <string> & result, string path, int idx, string digits )
    {
        if(idx==digits.size())
        {
            result.push_back(path);
            return;
        }
        for(char c: mappings[digits[idx]-'2'])
        {
            path.push_back(c);
            findComb(mappings,result,path,idx+1,digits);
            path.pop_back();
        }        
        
    }
    vector<string> letterCombinations(string digits) {
      if(!digits.size())
          return {};
      vector<string> mappings = {"abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
      vector <string> result;
      findComb(mappings,result,"",0,digits);
      return result; 
    }
};
