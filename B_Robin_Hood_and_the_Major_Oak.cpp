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
       int  n , k ;
       cin>>n>>k;
      int ak = ((n+1)*n/2 - (n-k)*(n-k+1)/2)%2 ;
      if( ak % 2 == 0) {
        yes ;
      }
      else  {
        no;
      }
 
        }
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}