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
void ip(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   ll x ;
   cin>>x ;
   a.push_back(x)  ;
  }
}
void op2(  vll &a ){


for(auto &value : a ){
   cout<<value<<" " ;
}
cout<<endl;
}


void op(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   
   cout<<a[i]<< " " ;
  }
  cout<<endl;
}


void solve() {
    vector<string> m ;
    for(int i = 0 ; i < 10 ;i++){
        string s ;
         cin>>s;
         m.push_back(s);
    }
    // vll a ;
    // a[0] = 5 ;
    // for(int i = 1  ; i < 5  ; i++){
    //   a[i] = i  ;
    // }
  int ans = 0;
    for(int i = 0; i < 10 ; i++){
      for(int j= 0; j < 10 ; j++){
        if( m[i][j] == 'X'){
          int temp =  min( i + 1 , j + 1 ) ; 
           temp = min(temp , 10  - i  ) ;
           temp = min( temp , 10 - j ) ;
           ans += temp ;
         }
      }
    }

    cout<<ans <<endl;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     int testcases;
     cin>>testcases;
       while( testcases--){
       
          solve() ;
        }
   
}
