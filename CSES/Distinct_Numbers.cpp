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
   set<ll> a ;
     for (ll  i = 0; i < n; i++)
     {
       ll x  ;
       cin>>x;
       a.insert(x);
     }
     cout<<a.size()<<endl;
     
   
}