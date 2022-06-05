class Solution {
public:
    void solveNQueens(int n, int i,vector <bool>&cols,  vector <bool> &leftDia,vector <bool> &rightDia, int & totalSoln  )
    {
        if(i==n)
        {
            totalSoln+=1;
            return;
        }            
        for(int j=0;j<n;j++)
        {
            if(!cols[j] and !leftDia[i+j] and !rightDia[i-j+n-1])
            {
                cols[j]=1;
                leftDia[i+j]=1;
                rightDia[i-j+n-1]=1;
                solveNQueens(n,i+1,cols,leftDia,rightDia,totalSoln);
                cols[j]=0;
                leftDia[i+j]=0;
                rightDia[i-j+n-1]=0;
            }
        }
    }
    int totalNQueens(int n) {
        vector <bool> cols(n,0);
        vector <bool> leftDia(2*n-1,0);
        vector <bool> rightDia(2*n-1,0);
        int totalSoln=0;
        solveNQueens(n,0,cols,leftDia,rightDia,totalSoln);
        return totalSoln;
    }
};
