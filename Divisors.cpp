#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void divisor( int n ){
  vector<int> a ;
   for (int  i = 1 ; i <= n / 2   ; i++)
   {
    if( n % i == 0 ){
      a.push_back(i) ;
    }
  
 
  
   }
  //   for (int  i = 0; i < a.size(); i++)
  // {
  //  cout<<a[i]<<endl;
  // }
  // cout<<n<<endl;
  cout<<a.size()<<endl;
   

}
void solve() {

  int n ;
  cin>>n;
  divisor(n) ;
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}