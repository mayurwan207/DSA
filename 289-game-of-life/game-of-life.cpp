class Solution {
public:
    void gameOfLife(vector<vector<int>>& board) {
        int m = board.size();
        int n = board[0].size();
        int dr[] = { - 1, -1 , -1 ,0, 0 , 1 ,1 , 1};
        int dc[] = {-1 , 0, 1 , -1 , 1, -1 , 0 , 1};
        for(int i = 0; i < m ; i++){
            for(int j = 0; j < n; j++){
                int liveneigh = 0;
                for(int d = 0; d < 8 ; d++){
                    int ni = i + dr[d];
                    int nj = j + dc[d];
                    if( ni >= 0 && ni < m && nj >= 0 && nj < n && board[ni][nj]%2==1){
                        liveneigh ++;
                    }

                }
                if(board[i][j] == 1 && (liveneigh < 2 || liveneigh > 3)){
                    board[i][j] = 3;
                }
                if(board[i][j] == 0 && liveneigh == 3){
                    board[i][j] = 2;
                }
              

            }
        }
        for(int i =0; i < m ; i++){
            for(int j = 0; j < n ; j++){
                board[i][j] = (board[i][j] == 1 || board[i][j] == 2)?1:0;
            }
        }
    }
};