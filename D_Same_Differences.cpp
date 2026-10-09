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

    int testcases;
     cin>>testcases;
       while( testcases--){
       int n ;
       cin>>n ;
       vll a(n) ;
       map<int , int > mp ;
       for (int  i = 0; i < n; i++)
       {
         cin>>a[i] ;
       }
       ll ans = 0; 
       for (int  i = 0; i < n; i++)
       {
        ans += mp[a[i] - i] ;
        mp[a[i] -i]++;
       }
      //  ll ans = 0; 
      //  for (int  i = 0; i < n; i++)
      //  {
      //   ll cnt = 0; 
      //     for (int  j = i  + 1 ; j < n; j++)
      //     {
      //       if( a[j]  ==a[i]) cnt++;
      //     }
      //   ans += cnt ;
          cout<<ans<<endl;
       }
       
       
 
        }
  


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}