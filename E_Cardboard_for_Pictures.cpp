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

pair<ll , ll >  longDisticntSubarray( vll &a ){
    unordered_set< ll > c ;
    ll l  = 0 ; ll r = 0; 
    ll n = a.size() ;
    ll x = 0; ll y= 0;
    ll maxlen = 0;
    while( l < r ){
        if( c.find ( a[r]) == c.end()){
            c.insert(a[r]);
           
            if( r - l + 1  > maxlen){
                maxlen = r - l + 1 ;
                x = l ; y = r ;
            }
            r++;
        }
        else {
            c.erase(a[l]);
            l++;
        }
    }
    return 

}
ll subk(vll &a , ll k ){
    ll n = a.size() ;
    int l = 0 ; 
    int r = 0; 
    ll sum = 0; 
    ll _ = 0; 

    while (r < n) {
        sum += a[r];
        while (sum > k && l <= r) {
            sum -= a[l];
            l++;
        }
        if (sum == k) {
            _++;
        }
        r++;
    }
    return _;
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
}

void ip(ll &n , vll &a ){
    for (ll i = 0; i < n; i++) {
        ll x;
        cin >> x;
        a.push_back(x);
    }
}

void op2(vll &a) {
    for (auto &value : a) {
        cout << value << " ";
    }
    cout << endl;
}

void op(ll &n , vll &a ){
    for (ll i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}

void solve() {
    ll n, c;
    cin >> n >> c;
    vll a;
    ip(n, a);

    ll sum = 0;       // sum of squares
    ll sumA = 0;      // sum of all elements
    for (int i = 0; i < n; i++) {
        sum += a[i] * a[i];
        sumA += a[i];
    }

    ll low = 0;
    ll high = 1e9;

    while (low < high) {
        ll k = low + (high - low) / 2;

        __int128 area = sum;
       
        area += (__int128)4 * k * sumA;
        area += (__int128)4 * k * k * n;

        if (area >= c) {
            high = k;
        } else {
            low = k + 1;
        }
    }

    cout << low << '\n';
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
