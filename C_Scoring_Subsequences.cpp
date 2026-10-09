#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) 
{
    return (a == 0) ? b : gcd(b % a, a);
}

 void solve(){
  int n ;
  cin>>n ;
  vll a ;
  for(int i = 0 ; i<n ; i++){
    int x ;
    cin>>x ;
    a.push_back(x);
  }

  for(int i = 0; i < n ; i++){
     int l = 1, r = i + 1;
while(l <= r){
    int m = (l + r) / 2;
    if(a[i - m + 1] >= m){
        l = m + 1;
    }else{
        r = m - 1;
    }
}
cout<<r<<" ";

  }
  cout<<endl;


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
