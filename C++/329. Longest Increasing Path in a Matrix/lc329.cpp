class Solution {
public:
    int dfs(vector<vector<int>>& matrix,int i, int j,vector<vector<int>> & table)
    {   
        if(table[i][j])
            return table[i][j];
        int len=0;
        vector <int> iNeighbors={i-1,i+1};
        vector <int> jNeighbors={j-1,j+1};
        for(int x=0;x<iNeighbors.size();x++)
        {
            if(iNeighbors[x]>=0 and iNeighbors[x]<matrix.size() and matrix[iNeighbors[x]][j]>matrix[i][j])
            {
                int subPath=dfs(matrix,iNeighbors[x],j,table);
                len=max(len, subPath);
            }
        }
        for(int y=0;y<jNeighbors.size();y++)
        {
            if(jNeighbors[y]>=0 and jNeighbors[y]<matrix[i].size() and matrix[i][jNeighbors[y]]>matrix[i][j])
            {
                int subPath=dfs(matrix,i,jNeighbors[y],table);
                len=max(len, subPath);
            }
        }
        return table[i][j]=len+1;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int maxLen=0;
        vector<vector<int>> table(matrix.size(),vector<int> (matrix[0].size()));
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                int path=dfs(matrix,i,j,table);
                maxLen=max(maxLen,path);
            }
        }
        return maxLen;
    }
};
