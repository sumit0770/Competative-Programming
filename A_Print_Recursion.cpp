#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void  recur(int n ){
  
    if(n == 0)return ;
   cout<<"I love Recursion"<<endl;
     recur(n-1) ;
   }
void solve() {

    int testcases;
     cin>>testcases;
      recur(3) ;
    
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}