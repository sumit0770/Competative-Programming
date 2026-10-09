#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int gcd( int a , int b ){
  if( a% b == 0 ) return b ; 
  return gcd( a%b , b );
}

void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
       int a , b ; 
       cin>> a>> b ;
        if(2 * a  > b  ){
          cout<<-1<<" "<<-1<<endl;
        }
        else{
          cout<<a  <<" "<< a  * 2 <<endl;
        }
         
         }
}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}