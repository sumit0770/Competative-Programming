// Aur Bhai Dekhne aagaye ;)
// Author: Robin

#include <bits/stdc++.h>
using namespace std;

#define pi (3.141592653589)
#define mod 1000000007
#define pb push_back
#define is insert
#define mp make_pair
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rfr(n) for(int i = n - 1; i >= 0; i--)
#define rep1(i, a, b) for(long long i = a; i <= b; i++)
#define fr(n) for(long long i = 0; i < n; i++)
#define nesfr(x, y) for(long long i = 0; i < x; i++) for(long long j = 0; j < y; j++)
#define rep(i, a, b) for(long long i = a; i < b; i++)
#define rrep(i, a, b) for(long long i = a; i < b; i--)
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

typedef long long int ll;
typedef long double ld;
typedef vector<ll> vi;
#define nl cout << "\n"

void solve() {
    ll n,m;
    cin>>n>>m;
    vector<pair<ll,ll>>v;
    fr(n){
        ll x,y;
        cin>>x>>y;
        v.pb({x,y});
    }

    ll ans = 0;


        if((v[0].ff-0)%2 == 0 && v[0].ss == 0){
            ans += (v[0].ff);
        }
        else if((v[0].ff-0)%2 == 1 && v[0].ss == 0){
            ans += (v[0].ff)-1;
        }
        else if((v[0].ff-0)%2 == 0 && v[0].ss!=0){
            ans += (v[0].ff)-1;
        }
        else if((v[0].ff-0)%2 == 1 && v[0].ss != 0){
            ans += (v[0].ff);
        }



    for(int i = 0;i<n-1;i++){
        if((v[i+1].ff-v[i].ff)%2 == 0 && v[i+1].ss == v[i].ss){
            ans += (v[i+1].ff-v[i].ff);
        }
        else if((v[i+1].ff-v[i].ff)%2 == 1 && v[i+1].ss == v[i].ss){
            ans += (v[i+1].ff-v[i].ff)-1;
        }
        else if((v[i+1].ff-v[i].ff)%2 == 0 && v[i+1].ss!=v[i].ss){
            ans += (v[i+1].ff-v[i].ff)-1;
        }
        else if((v[i+1].ff-v[i].ff)%2 == 1 && v[i+1].ss != v[i].ss){
            ans += (v[i+1].ff-v[i].ff);
        }
        // else if((v[i+1].ff-v[i].ff)%2 == 0 && abs(v[i+1].ss-v[i].ss) == 1){
        //     ans += (v[i+1].ff-v[i].ff)/2;
        //     if(v[i].ss%2 == 0){
        //         ans++;
        //     }
        // }
        // else if((v[i+1].ff-v[i].ff)%2 == 1 && abs(v[i+1].ss-v[i].ss) == 2){
        //     ans += (v[i+1].ff-v[i].ff)/2;
        //     if(v[i].ss%2 == 0){
        //         ans++;
        //     }
        // }
    }

    if(v[n-1].ff < m){
        ans+= m-v[n-1].ff;
    }
    cout<<ans<<endl;
}

const unsigned int M = 1000000007;
const int N = 2e5 + 5;

int main() {
    fast;
    ll t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}