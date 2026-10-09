#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
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
       while( testcases--){
      int n ;
      cin>>n;
    map< int , int > mp ; 
    set <int>  b ;
    vll a ;
   
     for (int  i = 0; i <n; i++)
     {
     cin>>a[i] ;
     mp[a[i]]++;
     b.insert(a[i]) ;
     b.insert(a[i] + 1 ) ;
     
     }
     int end = 0; 
     int ans = 0; 

     for (auto c : mp)
     {
       int x = mp[c];
       ans += max( 0, x - end) ;
       end = x ;

     }
  cout<<ans<<endl;
    
  
        }
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}