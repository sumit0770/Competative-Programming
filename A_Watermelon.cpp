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
    
   
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
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

    int testcases;
     cin>>testcases;
     if( testcases == 2 ){
      no ;
     }
     else
     { if( (testcases  -2 ) % 2 == 0){
        yes;

      }
      else{
    no;
  }
      }
  
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}