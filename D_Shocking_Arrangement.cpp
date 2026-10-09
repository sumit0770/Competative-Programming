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
ll n ; cin>>n ;
 vll   po , ni , ze  ; 
 ll sum = 0;
 for(int  i =  0; i < n ; i++) {
    int x ; cin>>x ;
    if( x >0){po.push_back(x);}
    else if( x < 0 ){
        ni.push_back(x) ;
    }
    else{
        ze.push_back(x) ;
    }
sum += abs(x) ;
 }

 sort( po.rbegin() , po.rend()) ;
 sort(ni.rbegin() , ni.rend()) ;
 if( sum == 0 ){
   no ;
    return ;
 }
yes ;
  vll ans;
    ans.insert(ans.end(), ze.begin(), ze.end()); // Add all ze at the start

    ll prefix = 0;
    size_t pidx = 0, nidx = 0;


while (pidx < po.size() || nidx < ni.size()) {
        if (prefix > 0 && nidx < ni.size()) {
            ans.push_back(ni[nidx]);
            prefix += ni[nidx];
            nidx++;
        } else if (pidx < po.size()) {
            ans.push_back(po[pidx]);
            prefix += po[pidx];
            pidx++;
        } else if (nidx < ni.size()) {
            ans.push_back(ni[nidx]);
            prefix += ni[nidx];
            nidx++;
        }
    }

    
    for (ll x : ans) {
        cout << x << " ";
    }
    cout << endl;


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
