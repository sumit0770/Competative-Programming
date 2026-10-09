#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
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
 void solve(){
     string s ;
    cin>>s;
    int n = s.size() ;
    vll open ;
    vll close ;

    for (int  i = 0; i < n; i++)
    {
        if(s[i] == '('){
            open.push_back(i) ;
        }
        else{
            close.push_back(i) ;
        }
    }
    int l = n - 1 ;
    int r = 0 ;
    vll ans ;
    while( close[l] < open[r]){
    ans.push_back(l ) ;
    ans.push_back(r) ;
    r++;
    l--;
    }
    sort(ans.begin(), ans.end()) ;
  for (auto ch : ans )
  {
    cout<<ch   +  1 <<" " ;
  }
  cout<<endl;








}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 1  ;
  //cin>>t ;
  while( t-- ){
     solve() ;
 }
}
