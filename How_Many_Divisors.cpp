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

  
  
      
       int a , b , c ;
       cin>>a>>b>>c;
       int cnt = 0; 
       for (int  i = a; i <= b  ; i++)
       {
       if( c % i == 0){
        cnt++;
       }
       }
       
    cout<<cnt<<endl;
        }
     
   


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}