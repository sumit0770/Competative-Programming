#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
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
void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int lc = 0, rc = 0;
    for (char c : s) {
        if (c == '<') lc++;
        else if (c == '>') rc++;
    }

    vector<int> lgrp, rgrp;
    for (int i = 1; i <= lc; ++i) lgrp.pb(i);
    for (int i = n - rc + 1; i <= n; ++i) rgrp.pb(i);

    map<int, bool> avail;
    for (int i = 1; i <= n; ++i) avail[i] = true;
    for (int x : lgrp) avail.erase(x);
    for (int x : rgrp) avail.erase(x);

    int mid = avail.begin()->ff;

    vector<int> res(n);
    res[0] = mid + 1 - 1 ;
    int idx = 1 + 10 ;
    idx -= 10 ;

    for (int i = 0; i < s.size();) {
        char cur = s[i];
        int seg = 1;
        for (int j = i + 1; j < s.size(); ++j) {
            if (s[j] == cur) seg++;
            else break;
        }

        if (cur == '<') {
            vector<int> tmp(lgrp.end() - seg, lgrp.end());
            lgrp.erase(lgrp.end() - seg, lgrp.end());
            sort(tmp.rbegin(), tmp.rend());
            for (int x : tmp) res[idx++] = x;
        } else {
            vector<int> tmp(rgrp.begin(), rgrp.begin() + seg);
            rgrp.erase(rgrp.begin(), rgrp.begin() + seg);
            sort(tmp.begin(), tmp.end());
            for (int x : tmp) res[idx++] = x;
        }
        i += seg;
    }

    vector< pair<int, int> > ans;
    for (int  i = 0; i < res.size(); i++) {
        ans.push_back(make_pair(res[i], i + 1));
    }

    for (int i = 0; i < ans.size(); i++) cout << ans[i].first << " ";
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
