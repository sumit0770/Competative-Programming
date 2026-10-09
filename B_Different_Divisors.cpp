#include<bits/stdc++.h>
using namespace std;

typedef long long ll;


bool isPrime(ll n) {
    if(n < 2) return false;
    for(ll i = 2; i*i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}


ll nextPrime(ll x) {
    while(!isPrime(x)) {
        x++;
    }
    return x;
}

void solve() {
    int t;
    cin >> t;
    while(t--) {
        ll d;
        cin >> d;
        
      
        ll p1 = nextPrime(1 + d);
        ll p2 = nextPrime(p1 + d);
       
       
        cout << p1 <<" " <<p2 << endl;
    }
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    solve();
    return 0;
}
