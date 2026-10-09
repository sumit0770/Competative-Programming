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

   int n;
   cin>>n;
   set< pair < string , string > > p ; 

   for (int i = 0; i <n; i++)
   {
     string tree , leaves ; 
     cin>>tree>>leaves ;

     
     p.insert( { tree , leaves } ) ;
   }
   
   
 cout<<p.size()<<endl;
     
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}