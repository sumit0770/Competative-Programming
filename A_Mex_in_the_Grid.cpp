#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> mp(n, vector<int>(n, 0));
    int top = 0, bottom = n - 1;
    int left = 0, right = n - 1;
    int cnt = n*n -  1 ;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++)
            mp[top][i] = cnt--;
        top++;

       
        for (int i = top; i <= bottom; i++)
            mp[i][right] = cnt--;
        right--;

      
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                mp[bottom][i] = cnt--;
            bottom--;
        }

       
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                mp[i][left] = cnt--;
            left++;
        }
    }

   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << mp[i][j] << " ";
        cout << "\n";
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

    return 0;
}
