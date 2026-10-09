#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";
typedef long long ll;
typedef vector<ll> vll;

void solve() {
    ll n, m;
    cin >> n >> m;
    vll a(n);
    for (ll i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    ll b;
    cin >> b; 
    sort(b.begin() , b.end()) ; 
   
    if (is_sorted(a.begin(), a.end())) {
        yes;
        return;
    }

   bool flag1 = true, flag2  = true;

    for (int i = 1; i < n; i++) {
        bool check1 = false, check2 = false;
        auto it = lower_bound(b.begin() , b.end() , a[i-1] + a[i]) ;
     if(*it != b.end()){
          bi = *it ;
     }

     
       

        
        if (flag1 && a[i-1] <= a[i]) check1 = true;
        if (flag2  && (bi - a[i-1]) <= a[i]) check1 = true;

        
        if (flag1 && a[i-1] <= (b - a[i])) check2 = true;
        if (flag2  && (b- a[i-1]) <= (b - a[i])) check2 = true;

        flag1 = check1;
        flag2  = check2;

        
        if (!flag1 && !flag2 ) {
            no;
            return;
        }
    }

    yes;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
