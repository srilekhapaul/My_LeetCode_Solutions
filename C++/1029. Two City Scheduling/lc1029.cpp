bool comp(vector <int> &person1, vector <int> &person2)
{
    if(person1[0]-person2[0]<person1[1]-person2[1])
        return true;
    return false;
}
class Solution {
public:

    int twoCitySchedCost(vector<vector<int>>& costs) {
        sort(costs.begin(),costs.end(), comp);
        int result=0;
        for(int i=0;i<costs.size();i++)
        {
            if(i<costs.size()/2)
               result+=costs[i][0];
            else
                result+=costs[i][1];
        }
        return result;
    }
};
