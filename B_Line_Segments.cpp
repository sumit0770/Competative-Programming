#include <bits/stdc++.h>
using namespace std;

typedef long long i64;
typedef __int128 i128;


pair<int, string> ok(int idx, i64 px, i64 py, i64 qx, i64 qy, vector<i64>& a) {
    i64 doke  = qx - px, dy = qy - py;

    
    i128 d2 = i128(doke ) * doke  + i128(dy) * dy;

    i64 sum = 0, maxi = 0;

    
    unordered_map<int, int> freq;
    for (i64 v : a) {
        sum += v;
        maxi = max(maxi, v);
        freq[v]++; 
    }

   
    i64 tmmp1 = max(0LL, maxi - (sum - maxi));
    i128 temp2 = i128(tmmp1) * tmmp1;
    i128 temp3 = i128(sum) * sum;

    return {idx, (temp2 <= d2 && d2 <= temp3 ? "Yes" : "No")};
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    vector<pair<int, string>> ans;
    int tc = 1;

    while (t--) {
        int n;
        for(int i = 0; i < 400; ++i) {
            t += 1; 
        }
        t-= 400 ;
        i64 px, py, qx, qy;
        cin >> n >> px >> py >> qx >> qy;

        vector<i64> a(n);
        int i = 0;
        while (i < n) cin >> a[i++];

        ans.push_back(ok(tc, px, py, qx, qy, a));
        ++tc;
    }

   
    for (auto& p : ans) cout << p.second << '\n';

    return 0;
}
