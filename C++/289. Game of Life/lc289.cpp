class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        vector <vector <int>> resBoard(board);
        for(int i=0;i<board.size();i++)
        {
            for(int j=0;j<board[0].size();j++)
            {
                int liveCellCount=0;
                if(i-1>=0 && j-1>=0 && board[i-1][j-1]==1)
                    liveCellCount++;
                if(i-1>=0 && board[i-1][j]==1)
                    liveCellCount++;
                if(i-1>=0 && j+1<board[0].size() && board[i-1][j+1]==1)
                    liveCellCount++;
                if(j-1>=0 && board[i][j-1]==1)
                    liveCellCount++;
                if(j+1<board[0].size() && board[i][j+1]==1)
                    liveCellCount++;
                if(i+1<board.size() && j-1>=0 && board[i+1][j-1]==1)
                    liveCellCount++;
                if(i+1<board.size()  && board[i+1][j]==1)
                    liveCellCount++;
                if(i+1<board.size() && j+1<board[0].size() && board[i+1][j+1]==1)
                    liveCellCount++;
                if(board[i][j]==1)
                {
                    if(liveCellCount<2)
                        resBoard[i][j]=0;
                    else if(liveCellCount==2 || liveCellCount==3)
                        resBoard[i][j]=1;
                    else if(liveCellCount>3)
                        resBoard[i][j]=0;
                }
                else
                {
                    if(liveCellCount==3)
                        resBoard[i][j]=1;
                }
            }
        }
        board=resBoard;      
        
    }
};
