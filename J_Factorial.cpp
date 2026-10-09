#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


int  fact(int n ){
 if( n <= 1 )  return 1 ;
   return  fact(n - 1 ) * n  ;
   

  


  }
void solve() {

   int n ;
   cin>>n;
  cout<< fact(n)<<endl ;
      
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}