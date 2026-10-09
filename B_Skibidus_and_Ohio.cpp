#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    string s;
    cin >> s;
set<char> st(s.begin(), s.end()); 
bool flag = false ;
for( int i = 1; i < s.size() ; i++){
    if( s[i] == s[i -1 ]){
        flag = true ;
    }
}
if( flag ){
     cout<<1<<endl;
}
else {
    cout<<s.size()<<endl;
}
   
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
