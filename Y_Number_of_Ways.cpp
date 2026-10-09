#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int ways( int s ,int e ){
  if( s==e){
    return 1 ;
  }
  if( s > e ){
    return 0  ;
  }


  return ways( s + 1 , e )  + ways( s + 2 ,  e ) + ways( s + 3 , e ) ;
}
void solve() {

 int s , e ;
 cin>> s >>e ;
 int ans = ways( s , e ) ;
 cout<<ans<<endl;
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}