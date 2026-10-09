#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
void nums(int n) {
    if (n == 1) {
        cout << 1 << endl; 
        return;
    }
    cout << n << endl; 
    nums(n - 1); 
   
}
void solve() {

    int testcases;
     cin>>testcases;
      nums(testcases);
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}