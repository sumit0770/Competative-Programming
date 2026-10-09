#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES\n"
#define no cout<<"NO\n"

typedef long long ll;
typedef vector<ll> vll;

const ll mod = 1e9 + 7;


ll binExp(ll a, ll b){
    ll res = 1;
    while(b){
        if(b & 1) res = (res * a) % mod;
        a = (a * a) % mod;
        b >>= 1;
    }
    return res;
}

void solve(){
    int n; cin >> n;
    vll a(n);

    ll M = 0, A = 0;
    set<ll> st;

    for(int i = 0; i < n; i++){
        cin >> a[i];
        if(a[i] == -1) M++;
        else st.insert(a[i]);
    }

    ll k = st.size();
    ll N = n - M;

    
    for(int i = 0; i < n - 1; i++){
        if(a[i] != -1 && a[i+1] != -1 && a[i] + 1 == a[i+1]){
            A++;
        }
    }

    if(N == 0){
        cout << binExp(2, M - 1) << "\n";
        return;
    }

    if(M == 0){
        cout << binExp(2, N - k) << "\n";
        return;
    }

    ll p = binExp(2, N - k);
    ll x = binExp(2, M - 1);

    ll ans = (A + 1) % mod;
    ans = (ans * p) % mod;
    ans = (ans * x) % mod;

    cout << ans << "\n";
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t; cin >> t;
    while(t--) solve();
}