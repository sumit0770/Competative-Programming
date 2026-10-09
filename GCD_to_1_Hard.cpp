#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve(int n, int m) {
    
    vector<vector<int> > matrix(n, vector<int>(m, 2)); 

    
    matrix[0][0] = 3;
   
     for (int i = 0; i < n; ++i) {
         
        for (int j = 0; j < m; ++j) {
          if( i == j  )
           { matrix[i][j] = 3 ;}
       
        }

       if( n != m ){
        if( n < m ){
          for (int  i = n -1 ; i < m ; i++)
          {
           matrix[n-1][i] = 3 ;
          }
          
        }
        else{
           for (int  i = m-1 ; i < n ; i++)
          {
           matrix[i][m-1] = 3 ;
          }
        }
       }
        
        
    }
     for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl; 
        
    }
   
    
    

   
   
}

int main() {
    int t;
    cin >> t;  
    while (t--) {
        int n, m;
        cin >> n >> m;  
        solve(n, m);    
    }
}
