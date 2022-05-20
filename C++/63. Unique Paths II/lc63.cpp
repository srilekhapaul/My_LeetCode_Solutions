class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        if(m>0)
        {
            int n=obstacleGrid[0].size();
            if(n>0)
            {
                if(obstacleGrid[0][0] or obstacleGrid[m-1][n-1])
                    return 0;
                vector <vector <int>> table(m,vector <int> (n));            
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        if(i==0 and j==0)
                            table[i][j]=1;
                        else if(obstacleGrid[i][j]==0)
                        {
                            table[i][j]=(((j-1)>=0) and ((j-1)<n)?table[i][j-1]:0)+(((i-1)>=0) and ((i-1)<m)?table[i-1][j]:0);
                        }                
                    }
                }
                return table[m-1][n-1];  
            }
        }
        return 0;
    }
};
