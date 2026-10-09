#include<bits/stdc++.h>
using namespace std;


#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void solve() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        
      bool flag = false ; 

        
      
     for (int  i = 0; i < n; i++)
     {
        if( s[i] =='1'){
          if( (i ==0 || i == n- 1 || ( i > 0 && s[i -1 ] =='1') ||  ( i < n-1 ) && s[i + 1 ] == '1' )  ){
               
    flag = true ;
          } 

        }
     }
     if( flag ){
      yes;
     }
       else{
        no;
       }

        // int z = 0; 
        // int o = 0; 
        
       
        // for (char c : g) {
        //     if (c == '0') 
        //         z++;
        //     else 
        //         o++;
        // }

       
        // if (z > o) {
        //     no;
        // } else {
        //     yes;
        // }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
