#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef double dl;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int, int> pii;
typedef pair<long long, long long> pll;

#define endl "\n"
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
vector<ll> total(26,0);
ll isOk(ll mid, ll target, vector<vector<ll>>& v,vector<ll>& req,ll m) {
    vector<ll> already_have(26,0);
    ll mul=m-mid;
    for (int j = 0; j < 26; j++) {
        already_have[j]=mul*(total[j]-v[target][j]);
    }
    bool batti=1;
    for (int j = 0; j < 26; j++) {
        if(already_have[j]<req[j]){
            batti=0;
            break;
        }
    }
    if (batti) return 0;
    else return 1;
}

ll binarysearch(vector<vector<ll>>& v, ll target,ll m) {
    vector<ll> req=v[target];
    ll l = 0, r = m;
    while (l < r) {
        ll mid = (l + r) / 2;
        if (isOk(mid, target, v,req, m) == 0) l = mid + 1;
        else r = mid;
    }
    return l-1;
}
int main()
{
    optimize();
    ll n,m;
    cin>>n>>m;
    vector<vector<ll>> v;
    for (ll i = 0; i < n; i++) {
        string s;
        cin>>s;
        vll tmp(26,0);
        v.push_back(tmp);
        for (ll j = 0; j < s.size(); j++) {
            v[i][s[j]-'A']++;
        }
    }

    for (ll i = 0; i < v.size(); i++) {
        for (int j = 0; j < 26; j++) {
            total[j]+=v[i][j];
        }
    }
    for (ll i = 0; i < n; i++) {
        cout<<binarysearch(v,i,m)<<" ";
    }
    cout<<endl;
    
    return 0;
}