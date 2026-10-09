#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        ll n;
        cin >> n;
        vll a ;
        ll sum =0;
        for (int  i = 0; i < n -  1  ; i++)
        {
          ll x ;
          cin>>x;
          a.push_back(x) ;
        }
        for (int  i = 0; i < n  - 1 ; i++)
        {
         sum+= a[i] ;
        }
        cout<<-1* sum<<endl;
        
       
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
