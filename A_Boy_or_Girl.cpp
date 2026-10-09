#include<bits/stdc++.h> 
using namespace std ;

void solveNQueens(int n);
void backtrack(int n, int row, vector<string>& board, vector<bool>& cols, vector<bool>& d1, vector<bool>& d2, vector<vector<string> >& solutions);

void solveNQueens(int n) {
    vector<vector<string> > solutions; 
    vector<string> board(n, string(n, '.')); 
    vector<bool> cols(n, false);
    vector<bool> d1(2 * n - 1, false); 
    vector<bool> d2(2 * n - 1, false); 
    
    backtrack(n, 0, board, cols, d1, d2, solution

void backtrack(int n, int row, vector<string>& board, vector<bool>& cols, vector<bool>& d1, vector<bool>& d2, vector<vector<string> >& solutions) {
    if (row == n) {
        solutions.push_back(board);
        return;
    }
    
    for (int col = 0; col < n; ++col) {
        if (!cols[col] && !d1[row + col] && !d2[row - col + n - 1]) {
          
            board[row][col] = 'Q';
            cols[col] = d1[row + col] = d2[row - col + n - 1] = true;

           
            backtrack(n, row + 1, board, cols, d1, d2, solutions);

            
            board[row][col] = '.';
            cols[col] = d1[row + col] = d2[row - col + n - 1] = false;
        }
    }
}

int main(){
// #ifndef  ONLINE_JUDGE 
//        freopen("input.txt" , "r" , stdin);
//         freopen("output.txt" , "w" , stdout) ;
// #endif     
         int n;
    cout << "Enter the number of queens: ";
    cin >> n;
    solveNQueens(n);
    return 0;
          
 
}

