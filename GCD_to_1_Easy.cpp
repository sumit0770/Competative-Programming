#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve(int n, int m) {
  int cnt = 1 ;
    for (int i = 1; i <= n; ++i) {
     cnt++;
        for (int j = 1; j <= m; ++j) {
           if( j == cnt){
            cout<<3<<" ";
           
           }
           else{
            cout<<2<<" " ;
           }

        
   
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
