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
vi aa ; 
int n ; 

 ll mexi(int a, int b, const vi& aa, int n) {
     set<int> s; 
     for(int i = 0; i <= n; i++){
        s.insert(i);
     }
     while(a >= 0 && b < 2 * n && aa[a] == aa[b]) { 
        s.erase(aa[a]);
        a--; 
        b++; 
     }
     return *s.begin(); 
}

void solve() {
   int n;
   cin >> n;
   
   vi aa;
   int a = -1, b = -1; 
   
   for(int i = 0; i < 2 * n; i++) {
     ll x; 
     cin >> x; 
     if(x == 0 && a == -1) a = i;
     else if(x == 0 && a != -1) b = i;
     aa.push_back(x);
   }

   cout << max({mexi(a, a, aa, n), mexi(b, b, aa, n), mexi((a + b) / 2, (a + b + 1) / 2, aa, n)}) << endl;
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
