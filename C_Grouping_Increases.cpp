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

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    int penalty = 0;
    int x = INT_MAX, y = INT_MAX; 

    for (int i = 0; i < n; ++i) {
        int cur = a[i];

       
        if (x > y) swap(x, y);

        if (cur <= x) {
            x = cur; 
        } else if (y < cur) {
            x = cur; 
            penalty++;
        } else {
            y = cur; 
        }
    }

    cout << penalty << endl;
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
