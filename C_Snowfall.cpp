#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> a, b, c, d;
        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if(x % 6 == 0) a.push_back(x);
            else if(x % 2 == 0) b.push_back(x);
            else if(x % 3 == 0) c.push_back(x);
            else d.push_back(x);
        }

        vector<int> ans;
        for(auto it : a) ans.push_back(it);
        for(auto it : b) ans.push_back(it);
        for(auto it : d) ans.push_back(it);
        for(auto it : c) ans.push_back(it);
        
        for(int i = 0; i < n; i++) cout << ans[i] <<  " \n"[i == n - 1];
    }
}