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

  int t;
  cin>>t;
   while(t--){
    int n ;
    cin>>n;
    int cnt  =0 ;
    string s ;
    
    cin>>s ;
    n = s.size() ;
     bool flag = false  ;
    for (int  i = 0; i < n - 2    ; i++)
    {
     if( s.substr( i , 3 ) == "...") flag  =true ;
     else continue; 
    }
    for (int  i = 0; i < n; i++)
    {
     if(s[i] == '.') cnt++;
    }
    
    if( flag )cout<< 2<<endl;

   else{
      cout<<cnt<<endl;
   }
    

 
   
}
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}