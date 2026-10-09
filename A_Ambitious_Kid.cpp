#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void solve() {

   
      {
       int n ;
       cin>>n;
       vll a ;
      
       for (int  i = 0; i < n ; i++)
       {
       ll x ;
        cin>>x  ;
        if( x < 0 ) a.push_back(-x) ;
        else
       { a.push_back(x) ;}
       }
       auto ans = *min_element(a.begin(), a.end());


      cout<<ans<<endl;
        }
 
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}