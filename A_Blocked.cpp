#include <bits/stdc++.h>
using namespace std;
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b)
{
    return (a == 0) ? b : gcd(b % a, a);
}
void solve()
{
    int n;
    cin >> n;

    vll a ;
    unordered_map<int , int> mp;
    for(int i= 0; i < n ; i++){
        int x ;cin>>x;
        a.push_back(x) ;
        mp[x]++;
    }

    bool flg = true ;
    for(auto &p : mp ){
        if(p.second >= 2 ){
           flg = false ;
           break ; 
        }
    }

    if( flg == false ){
       cout << -1 << endl;
       return ;
    }
    else {
        sort(a.rbegin(), a.rend());
        for(int i = 0; i < n ; i++){
          cout << a[i] << " ";
        }
        cout << endl;
    }
}


int main()
{

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}
