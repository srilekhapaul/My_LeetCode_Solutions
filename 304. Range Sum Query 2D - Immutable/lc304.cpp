class NumMatrix {
public:
    vector <vector <int>> matrix;
    NumMatrix(vector<vector<int>>& matrix) {
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=1;j<matrix[i].size();j++)
            {
                matrix[i][j]+=matrix[i][j-1];
            }
        }
        for(int i=1;i<matrix.size();i++)
        {
            for(int j=0;j<matrix[i].size();j++)
            {
                matrix[i][j]+=matrix[i-1][j];
            }
        }
        this->matrix=matrix;
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int sum=0;
        int a=row1-1>=0?matrix[row1-1][col2]:0;
        int b=col1-1>=0?matrix[row2][col1-1]:0;
        int c=row1-1>=0 and col1-1>=0 ? matrix[row1-1][col1-1]:0;
        sum=matrix[row2][col2]-(a+b-c);
        return sum;
            
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */
