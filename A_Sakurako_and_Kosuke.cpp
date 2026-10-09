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
       int t ;
       cin>>t;
      if( t % 2 != 0){
        cout<<"Kosuke"<<endl;
      }
      else{
        cout<<"Sakurako"<<endl;
      }
      
 
        }
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}