#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
    
//      _         _   _                
//     / \  _   _| |_| |__   ___  _ __ 
//    / _ \| | | | __| '_ \ / _ \| '__|
//   / ___ \ |_| | |_| | | | (_) | |   
//  /_/   \_\__,_|\__|_| |_|\___/|_|   
                                    
 
// / ___| _   _ _ __ ___ (_) |_  / ___|  __ _ _ __   __ _  __ _| | ___ 
// \___ \| | | | '_ ` _ \| | __| \___ \ / _` | '_ \ / _` |/ _` | |/ _ \
//  ___) | |_| | | | | | | | |_   ___) | (_| | | | | (_| | (_| | |  __/
// |____/ \__,_|_| |_| |_|_|\__| |____/ \__,_|_| |_|\__, |\__,_|_|\___|
//                                                  |___/              
    
   
ll gcd( ll a ,ll b) {
if(b % a  == 0) return a  ; 
 else return gcd(b  ,b % a );  
}

ll lcm( ll a , ll b ){
    return gcd( a ,b) / a * b;
}


void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
     int n;
        cin >> n; 
        vector< vi > a(n, vi(n));
        ll ans =  0; 

       
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }
        
         for (int d = -n + 1; d < n; ++d) { 
            int mini = INT_MAX; 
            
            for (int i = 0; i < n; ++i) {
                ll j = i + d; 
                if (j >= 0 && j < n) { 
                    mini = min(mini, a[i][j]);
                }
            }
            
            
            if (mini < 0)  ans += (-mini);       
                
                 
        }
           cout<<ans<<endl;
}
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}