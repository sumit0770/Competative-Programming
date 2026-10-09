#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
 void solve(){
   int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++)
            cin >> a[i];

        for (int i = (n % 2); i < n - 1; i += 2) {
            if (a[i] > a[i + 1]) {
                swap(a[i], a[i + 1]);
            }
        }

        bool sorted = true;

        for (int i = 1; i < n; i++) {
            if (a[i - 1] > a[i]) {
                sorted = false;
                break;
            }
        }

        cout << (sorted ? "YES" : "NO") << '\n';


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
