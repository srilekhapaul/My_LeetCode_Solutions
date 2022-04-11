class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        if(k==0 || (grid.size()==1 && grid[0].size()==1) )
            return grid;
        vector <int> rowVector;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                rowVector.push_back(grid[i][j]);
            }
        }
        k=k%rowVector.size();
        rotate(rowVector.begin(), rowVector.begin()+rowVector.size()-k, rowVector.end());
        int l=0;
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[0].size();j++)
            {
                grid[i][j]=rowVector[l++];
            }
        }
        return grid;
    }
};
