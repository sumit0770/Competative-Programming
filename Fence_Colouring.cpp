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
 void solve(){
 int n;
 cin>>n ;

 map<int ,int> mp ;
 int cnt = 0;
 for(int i = 0; i < n ; i++){
    int x ; cin>>x ;
    if( x == 1 )cnt++;
    mp[x]++;
 }
 int curr_max =  0;
 for(auto &[a, b ] : mp ){
     if( b > curr_max ){
         curr_max = b ;
     }
 }

 if( mp.find(1) != mp.end() && curr_max == cnt ){
    cout<< n - mp[1] <<endl;
     return ;
 }
 

else{
     cout<<( n - curr_max) + 1  <<endl;
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
