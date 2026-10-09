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

    int testcases;
     cin>>testcases;
       while( testcases--){
        int n , k ;
        cin>>n>>k;
        vll a ;
        for (int  i = 0; i < n ; i++)
        {
         int x; 
         cin>>x ;
         a.push_back(x) ;
         
        }
        bool is = false ;
for (int  i = 0; i < n ; i++)
{
 if( a[i] == k){
  is =true ;
  break;
 }
}
if(is) {yes ;}
else {no ;}
        
 
        }
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}