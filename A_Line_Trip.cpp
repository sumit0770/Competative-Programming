#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
         int n , k ; 
         cin>>n >>k;
         vll a(n) ;
        
          int ans= 0 ; 
          int prev  =  0 ;
        for (int i = 0; i < n; ++i) {
      int a; cin >> a;
      ans = max(ans, a - prev);
      prev = a;
    }
    ans = max(ans, 2 * (k - prev));
         
        cout<<ans<<endl;
        }
      
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}