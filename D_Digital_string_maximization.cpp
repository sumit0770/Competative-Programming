#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


 void solve(){
  
  string s ; 
  cin>>s ;
  vll dg( s.size()) ;

  for(int i = 0; i < s.size() ; i++){
    dg[i] = s[i] -'0' ;
  }

  for(int i = 1  ; i < s.size() ; i++){
        int cp = i ;
       while( cp >= 1 && dg[cp]>0 && dg[cp]  > dg[cp -1 ] + 1 ){
           int temp = dg[cp] ;
           dg[cp] =  dg[cp - 1] ;
          dg[cp -1 ] = temp - 1;

           if( cp >1 ){
            cp--;
           }
        else{
            break ;
        }
       }
  } 

  string ans = "" ;
  for(auto d : dg ){
    ans += to_string(d);
  }
  cout<<ans<<endl;

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
