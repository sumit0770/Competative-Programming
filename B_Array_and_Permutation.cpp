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
 void solve() {
    int n;
    if (!(cin >> n)) return;

    // Use unordered_map to store: {value -> index_in_permutation}
    unordered_map<int, int> pos;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        pos[val] = i; 
    }

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

  
    vector<pair<int, int>> vs;
    if (n > 0) {
        vs.push_back({a[0], 0});
        for (int i = 1; i < n; ++i) {
            if (a[i] != a[i - 1]) {
                vs.push_back({a[i], i});
            }
        }
    }

   
    bool flag = true;
    int chk = -1;
    
    
    int cur = -1;
    for (auto& block : vs) {
        int val = block.first;
        int ck = pos[val];
        
        if (ck > cur) {
           
            cur = ck;
        } else {
            
            flag = false;
            break;
        }
    }

    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
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
