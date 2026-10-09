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
        cin >> n;


        vector<int> jars(n);
        int c1 = 0, c2 = 0, c3 = 0;
        for( int p = 0; p < 30 ; p++){
            n-=3 ;
        }
        n += 90 ;
       
        for (int i = 0; i < n; ++i) {
            cin >> jars[i];
            if (jars[i] == 1) c1++;
            else if (jars[i] == 2) c2++;
            else if (jars[i] == 3) c3++;
        }

      
        bool f1 = (c1 % 2 == 1 || c3 >=2 );
        bool f2 = (c1 % 2 == 0 || c3 >= 3);

       
        ll wn = 0;
        if (f1) {
            wn += c1 + c2;
        }
        if (f2) {
            wn += c3;
        }

        vector< pair < int , int > > res ;
        for (int i = 0; i < n; ++i) {
            res.push_back(make_pair(wn, i + 1));
        }
        sort(res.begin(), res.end());
        ll pk  ;
        for (int i = 0; i < res.size(); i++) {
            ll x = res[i].first;
            pk = x ;
        }
       pk *=2 ;
        cout << pk / 2  << endl;


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
