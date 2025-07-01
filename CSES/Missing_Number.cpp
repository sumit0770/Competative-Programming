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
    
    ll sum = 0 ;
    for (ll  i = 0; i <n - 1; i++)
    {
 
     ll x ;
     cin>>x;
     sum+= x ;
 
 
    }
     ll ans = n*(n+1) / 2  -  sum  ;
    cout<<ans<<endl;
    
 
    return 0;
}
// This code reads an integer n and then reads n-1 integers, calculating the sum of these integers.
// It then computes the missing number in the range from 1 to n by subtracting the sum from the expected sum of the first n natural numbers.
// Finally, it outputs the missing number.