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
        vll a(n) ;
        for (int  i = 0; i < n; i++)
        {
          cin>>a[i];
        }
        
       
       int maxi = *max_element( a.begin() ,a.end());
        int mini = *min_element( a.begin() ,a.end());
        cout<<(n-1 )* (maxi - mini)<<endl;
 
        }
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}