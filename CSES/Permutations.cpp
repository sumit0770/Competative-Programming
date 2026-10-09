#include<bits/stdc++.h>
 
using namespace std;
 
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    ll n ;
    cin>>n;
    if(n == 2 || n == 3 ){
      cout<<"NO SOLUTION"<<endl;
    }
    else if ( n ==1 ){
      cout<<1<<endl;
    }
    else if ( n == 4 ){
      cout<<"2 4 1 3"<<endl;
    }
    else{
     for (ll  i = 1; i <= n; i+=2)
     {
        cout<<i<<" ";
     }
    for (ll  i = 2; i <= n; i+=2)
     {
        cout<<i<<" ";
     }
     
      
    }
    return 0;
}
// This code generates a permutation of numbers from 1 to n such that no two adjacent numbers are consecutive.
// It handles special cases for n = 1, 2, 3, and 4, and for larger n, it prints odd numbers first followed by even numbers.
// The output is printed in a single line with spaces between the numbers.