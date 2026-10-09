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
       int n, k  ;
       cin>>n>>k;
       vll  a(n) ;
       for (int  i = 0; i < n; i++)
       {
        cin>>a[i];
       }
           sort( a.begin() ,a.end()) ;
      //  if( k == 1 ){
     
      //   int ans = 2 * a[n-1]  + a[0] + a[n -2 ] ;
      // cout<<ans<<endl;
      //  }
      //  else{
      //   int ans =    a[n-1]  + a[0] + a[n -2 ]  + a[1];
      int ans =   a[0] + a[k-1] + a[n-2] + a[n-1];
        cout<<ans<<endl;
       }
 
        }
  


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}