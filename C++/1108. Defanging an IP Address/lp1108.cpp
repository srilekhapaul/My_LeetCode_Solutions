class Solution {
public:
    string defangIPaddr(string address) {
        string defangedAddress;
        for(int i=0;i<address.length();i++)
        {
            if(address[i]=='.')
            {
                defangedAddress.push_back('[');
                defangedAddress.push_back(address[i]);
                defangedAddress.push_back(']');
            }
            else
                defangedAddress.push_back(address[i]);
        }
        return defangedAddress;
    }
};
