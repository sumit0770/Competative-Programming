#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll ;



void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
      int n;
      cin>>n;
      vll a(n) ;

      for( int i = 0; i < n ; i++ ){
          cin>>a[i] ;
      }
      if( a[0] == 1  ){
        yes;
      }
      else{
        no ;
      }
 
        }
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}