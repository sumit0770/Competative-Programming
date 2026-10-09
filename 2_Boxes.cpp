#include <iostream>
#include <cmath>
using namespace std;

void solve() {
  int a  , b , c ;
  cin>>a>>b>>c ;
  int p = a ;
  int q = b ;
  int ans =   0;
  
  if( abs( a - b ) == c ){
     cout<<ans<<endl;
    return; 
  } 

  if(( abs ( a - b ) - c)  % 2 == 0 ){
     int diff =abs ( abs ( a - b ) - c ) ;
     ans = diff ;
     cout<< ans/ 2 <<endl;
     return; 
}
cout<<-1<<endl;
  


    
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
