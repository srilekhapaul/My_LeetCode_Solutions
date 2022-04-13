class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector <vector<int>> matrix(n,vector <int> (n));
        int num=1;
        int r1=0,c1=0,r2=n-1, c2=n-1;
        int i,j;
        while(r1<=r2 and c1<=c2)
        {
            i=r1;
            for(j=c1;j<=c2;j++)
            {
                matrix[i][j]=num++;
            }
            r1++;
            j=c2;
            for(i=r1;i<=r2;i++)
            {
                matrix[i][j]=num++;
            }
            c2--;
            
            i=r2;
            for(j=c2;j>=c1;j--)
            {
                matrix[i][j]=num++;
            }
            r2--;
            j=c1;
            for(i=r2;i>=r1;i--)
            {
                matrix[i][j]=num++;
            }
            c1++;            
        }       
        return matrix;
    }
};
