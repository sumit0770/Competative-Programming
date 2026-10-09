#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
 void solve(){
string s ;cin>>s ;

int r = 0 ;
int g  = 0 ; 
int p =0; 

bool flag = false ;
for(int i = 0; i < s.size() ; i++){
    if( s[i] == 'R') r++ ;
    else  g++ ;
  if( i > 0 && s[i - 1 ] == s[i]) p++;
}


if( s.size() > 2&& s[0] == s[s.size() - 1 ])p++;
if( r != g || p > 2 ){flag = true ;}
if(flag){ no ;}
else yes ;






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
