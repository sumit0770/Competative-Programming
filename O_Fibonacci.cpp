#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

int fib(int n ){
  if( n == 1 ) return 0 ;
 if( n == 2)  return 1; 
 return fib(n - 2 ) + fib( n - 1 ) ;
 
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ;
     cin>>n;
   cout<<fib(n)<<endl ;
   
}