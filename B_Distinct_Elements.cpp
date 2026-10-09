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
        cin >> n;
        vector<long long> b(n + 1);
        for (int i = 1; i <= n; ++i)
            cin >> b[i];

        vector<long long> d(n + 1);
        for (int i = 1; i <= n; ++i)
            d[i] = b[i] - b[i - 1];  

        vector<int> a(n + 1);
        unordered_map<int, int> mp;
        int tag = 1;

        for (int i = 1; i <= n; ++i) {
            int p = i - d[i];
            if (p == 0) {
                
                a[i] = tag++;
            } else {
               
                a[i] = mp[p];
            }
            mp[i] = a[i];
        }

        for (int i = 1; i <= n; ++i)
            cout << a[i] << " ";
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
