#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b)
{
    return (a == 0) ? b : gcd(b % a, a);
}
bool is( int n )
{
   
    while ((n & 1) == 0 && n > 0) {
        n >>= 1; 
    }

   
    int rr = 0, main = n;

    while (n > 0) {
        rr = (rr << 1) | (n & 1); 
        n >>= 1;                              
    }

    return main == rr; 
}


void solve()
{
    int n;
    cin >> n;
   if( is(n)) {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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
