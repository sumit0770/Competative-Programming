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
  int n ; cin>>n  ;
  string s ; cin>>s ;

  unordered_map<char , int > freq   ;
  unordered_map<char ,vi >  loc ;

   
for( int i = 0; i < n ; i++ ){
    freq[s[i]]++ ;
    loc[s[i]].push_back(i) ;
 }

 string temp ="abcdefghijklmnopqrstuvwxyz" ;
 sort(temp.begin() , temp.end() , [&]( char& a , char& b) {
    return freq[a] > freq[b] 
 });

 

 int diff= INT_MAX ; 
 int pos = 0; 
 for(int  uc = 1  ; uc <= 26 ; uc++){

 }




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
