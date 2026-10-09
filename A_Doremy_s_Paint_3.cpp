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
        int n ;
        cin>>n;
    
   
        map<int , int > count ;
        for (int  i = 0; i < n ; i++)
        { 
          int x ;
            cin>>x;
            count[x]++;
          
        }
        if( count.size()>=3) {no;}
        else{
          if( abs(count.begin() ->second - count.rbegin()-> second ) <= 1){
            yes;
          }
          else{
            no;
          }
          
        }
        
        
 
        }
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}