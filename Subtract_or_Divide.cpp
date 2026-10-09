#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    while (T--) {
        long long n;
        cin >> n;

      
        map<int , int> mp ;
        queue<long long> q;

        q.push(n);
       mp[n]++;

        while (!q.empty()) {
            long long cur = q.front();
            q.pop();

           
            if (cur > 2) {
                long long nxt = cur - 2;
                if (!mp.count(nxt)) {
                    mp[nxt]++;
                    q.push(nxt);
                }
            }

          
            if (cur > 1 && cur % 2 == 0) {
                long long nxt = cur / 2;
                if (!mp.count(nxt)) {
                   mp[nxt]++;
                    q.push(nxt);
                }
            }
        }

        cout << mp.size() << "\n";
    }
    return 0;
}
