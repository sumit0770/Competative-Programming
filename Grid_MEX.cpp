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
 { int n ;
  cin>>n ;
vector<int>m; 
for(int i = 0; i <n ; i++){
    m.push_back(i) ;
}
for(int i = 0; i < n ; i++){
     for(auto ch : m ){
        cout<<(ch+ i)%n<<" " ;
     }
     cout<<endl;
}

cout<<endl;}

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
