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
 void solve(){
 //int n ; cin>>n;
 int a , b , k ;cin>>a>>b>>k ;

 if( k % 2 ){
    if( b > a ){
       cout<<"Second"<<endl;
    }
    else if ( b== a ){
      cout<<"First"<<endl;
    }
    else{
        cout<<"First"<<endl;
    }
 }
else{
    if( b > a ){
      cout<<"Second"<<endl;
    }
    else if ( b== a){
       cout<<"Second"<<endl;
    }
    else{
      cout<<"First"<<endl;
    }
}








}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
