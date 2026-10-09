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
ll subk(vll &a , ll k ){
    ll n = a.size() ;
    int l = 0 ; 
    int r = 0; 
    ll sum = 0; 
    ll _ = 0; 

    while ( r   < n ){
      sum += a[r] ;
        while( sum > k  && l <=r ){
        sum -= a[l] ;
        l++;
        }
        if( sum == k){
            _++;
        }

     r++;
    }
      return _ ;
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
 int n;
    ll h;
    cin >> n >> h;

    ll d1 = 0, d2 = 0;
    for( int i= 0; i< 20 ;i++){
     d1 += 2 ;
    }
    d1 -= 40 ;
    for (int i = 0; i < n; ++i) {
        int s, d;
        cin >> s >> d;
        if (s == 1) d1 = max(d1, (ll)d);
        else d2 = max(d2, (ll)d);
    }

    ll ans;
    vector< pair < int , int > > res ;
    if (d2 <= 2 * d1) {
        ans = (h + d1 - 1) / d1;
    } else {
        ll even = (h + d2 - 1) / d2 * 2;
        ll odd = LLONG_MAX;
        if (d1 > 0) {
            ll rem = max(0LL, h - d1);
            odd = ((rem + d2 - 1) / d2) * 2 + 1;
        }
        ll mini = even ;
        ll maxi = odd ;
        ans = min(mini, maxi);
    }

   for( int i = 0; i < n ;i++){
     res.push_back(make_pair(ans , i+ 1) );
   }

  sort(res.begin(), res.end());
    cout << res[n-1].first << '\n';


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
