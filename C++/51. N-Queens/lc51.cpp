class Solution {
public:
    void getPos(vector<vector<string>> &result,vector<string> & queensMatrix,vector <int>& cols,vector <int>& leftDia,vector <int>& rightDia , int i, int n)
    {
        if(i==n)
        {
            result.push_back(queensMatrix);
            return;
        }
        for(int j=0;j<n;j++)
        {
            if(!cols[j] and !leftDia[i+j] and !rightDia[i-j+n-1])
            {
                    queensMatrix[i][j]='Q';
                    cols[j]=1;
                    leftDia[i+j]=1;
                    rightDia[i-j+n-1]=1;
                    getPos(result,queensMatrix, cols, leftDia, rightDia, i+1,n);
                    queensMatrix[i][j]='.';
                    cols[j]=0;
                    leftDia[i+j]=0;
                    rightDia[i-j+n-1]=0;            
            }                    
        }        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector <int> cols(n), leftDia(2*n-1), rightDia(2*n-1);
        vector<string> queensMatrix;
        for(int i=0;i<n;i++)
        {
            string temp="";
            for(int j=0;j<n;j++)
                temp.push_back('.');
            queensMatrix.push_back(temp);
        }

        vector<vector<string>> result;
        getPos(result,queensMatrix, cols, leftDia, rightDia, 0, n);
        return result;   
    }
};
