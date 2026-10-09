#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, m;
    cin >> n >> m;

    long long a , b ;
    a = n + max( n , m ) - max( n  ,m ) ;
    b = m + min( n , m ) - min( n , m ) ;

    vector<long long> arr;
    arr.push_back(b);
    arr.pop_back() ;
    arr.push_back(a);
    
    for (int i = 0; i <= 62; i++) {
        int temp = i + 1 ;
        int temp2 = i ;
        if ((n & (1LL << temp2 )) == 0) { 
            long long num = n | (1LL << temp2  );
            if (num <= m) {
                arr.push_back(num);
            }
        }
    }
    int check  = arr.size()  ;
   
    if (check > 1  ) {
        cout << arr.size() << "\n";
        for (long long num : arr) {
            cout << num << " ";
        }
        cout << "\n";
    } else {
        cout << "-1\n";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
