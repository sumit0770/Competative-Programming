#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
#include <set>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

 void solve(){
   int n, m;
    cin >> n >> m;
    vector<int> a(n);
    int mini = INT_MAX;
    set<int> s;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        a[i] = x;
        mini = min(mini, x);
        s.insert(x);
    }
    for (auto ch : s )
    {
        a.push_back(ch);
    }
   for(auto ch : a){
     ch -= mini;
   }
   for(auto ch : a){
    cout<<ch<<" ";
   }
cout<<endl;






}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
