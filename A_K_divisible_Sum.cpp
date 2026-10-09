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

ll lcm(ll a, ll b)
{
    return (a / gcd(a, b)) * b;
}
ll subk(vll &a , ll k ){
    ll n = a.size() ;
    int l = 0 ; 
    int r = 0; 
    ll sum = 0; 
    ll ans = 0; 

    while ( r   < n ){
      sum += a[r] ;
        while( sum > k  && l <=r ){
        sum -= a[l] ;
        l++;
        }
        if( sum == k){
            ans++;
        }

     r++;
    }
      return ans ;
}

bool is_possible(ll n, ll k, ll mid)
{
    ll cf = (n + k - 1) / k;
    ll sum = cf * k;

   
    ll maxi = (sum + n - 1) / n;

  
    return maxi <= mid;
}

void solve()
{
  
    int n , k ;
    cin>>n>>k;
    vll a(n) ;
    for(int i = 0; i < n ; i++){
        cin>>a[i] ;
    }
   int ans =  subk(a , k );
   cout<<ans<<endl;
   // cout << ans << endl;
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
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// #define yes cout << "YES" << endl;
// #define no cout << "NO" << endl;
// typedef long long ll;
// typedef vector<ll> vll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// ll gcd(ll a, ll b)
// {
//     return (a == 0) ? b : gcd(b % a, a);
// }

// ll lcm(ll a, ll b)
// {
//     return (a / gcd(a, b)) * b;
// }
// void ip(ll &n, vll &a)
// {
//     for (ll i = 0; i < n; i++)
//     {
//         ll x;
//         cin >> x;
//         a.push_back(x);
//     }
// }
// void op2(vll &a)
// {

//     for (auto &value : a)
//     {
//         cout << value << " ";
//     }
//     cout << endl;
// }

// void op(ll &n, vll &a)
// {
//     for (ll i = 0; i < n; i++)
//     {

//         cout << a[i] << " ";
//     }
//     cout << endl;
// }

// bool is_true(ll n, ll k, ll mid)
// {
//     ll cf = (n + k - 1) / k;
//     ll sum = cf * k;

//     ll maxi = (sum + n - 1) / n;
//     return maxi <= mid;
// }

// void solve()
// {
//     int n, m;
//     cin >> n >> m;
//     ll l = 1 ;
//     ll h = n;
//     ll ans = n;
//     if( n == 1){
//         cout<<m<<endl;
//         return ;
//     }

//     while (l <= h)
//     {
//         ll mid = l + (h - l) / 2;
//         if (is_true(n, m, mid))
//         {
//             ans = mid;
//             h = mid - 1;
//         }
//         else
//         {
//             l = mid + 1;
//         }
//     }
//     cout << ans << endl;
// }

// int main()
// {

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//     int t;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
// }
