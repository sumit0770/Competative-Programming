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
    ll n, m;
    cin >> n >> m;

    vector<pair<ll, ll> > a(n);

    for (int i = 0; i < n; i++) {
        ll sum = 0, score = 0, prefix = 0;
        
        for (int j = 0; j < m; j++) {
            ll num;
            cin >> num;
            sum += num;
            prefix += num;
            score += prefix;
        }

        a[i] = make_pair(sum, score); 
    }

    sort(a.rbegin() , a.rend()) ;

    
    ll ans = 0, prev_sum = 0;
    for (int i = 0; i < n; i++) {
        ll temp = a[i].first, score = a[i].second;
        ans += score + (m * prev_sum);
        prev_sum += temp;
    }

    cout << ans << endl;;
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
