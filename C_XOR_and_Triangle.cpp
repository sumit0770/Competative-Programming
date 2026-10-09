#include <iostream>
#include <cmath>
using namespace std;

void solve() {
    int X, Y, K;
    cin >> X >> Y >> K;

    int current_diff = abs(X - Y);
    int moves = 0;

   
    if (current_diff == K) {
        cout << 0 << endl;
        return;
    }
    
    
    if (current_diff > K) {
        cout << -1 << endl;
        return;
    }

   
    if (K > X + Y) {
        cout << -1 << endl;
        return;
    }

    
    while (current_diff != K) {
        if (current_diff < K) {
            current_diff += 2;  
        }
        moves++;

        
        if (current_diff > K || (K - current_diff) % 2 != 0) {
            cout << -1 << endl;
            return;
        }
    }

    cout << moves << endl;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        solve();
    }
    return 0;
}
