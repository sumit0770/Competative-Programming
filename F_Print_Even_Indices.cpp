#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl; 
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void even(int n, int a[]) {
    if (n < 1) return; 
    cout << a[n - 1] << " "; 
    even(n - 2, a);  
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    if (n % 2 == 0) {
        even(n -1 , a); 
    } else {
        even(n , a); 
    }

    cout << endl;  
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
