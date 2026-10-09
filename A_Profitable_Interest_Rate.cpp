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
      ll x , y ;
      cin>>x>>y ; 


      if( x >= y ){
        cout<<x<<endl;
      }
      else 
    {
      if( (y - x ) <= x )
        cout<<x -( y - x ) <<endl;
     
      else cout<<0<<endl;
       
      
    }

 
        }
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}