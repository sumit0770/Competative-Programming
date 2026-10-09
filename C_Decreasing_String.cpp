#include<bits/stdc++.h>
using namespace std;

// Sumit Sangale
// IIITLucknow

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

  string s ; cin>>s ;
  ll  k ; cin>>k ; 
  ll n = s.size(); 

  stack<ll>st ;
  vector<ll> a ;

  for (int i = 0; i < n; i++) {
    while (!st.empty() && s[st.top()] > s[i]) { 
        a.push_back(st.top()); 
        st.pop();
    }
    st.push(i);
}

while (!st.empty()) {
    a.push_back(st.top());
    st.pop();
}

set<ll> se;

int p = 0;
while (k > n) {
    k -= n;
    n--;
    se.insert(a[p++]); 
}

for (int i = 0; i < s.size(); i++) {
    if (se.count(i)) continue; 
    k--;
    if (k == 0) {
        cout << s[i]; 
        return;
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
