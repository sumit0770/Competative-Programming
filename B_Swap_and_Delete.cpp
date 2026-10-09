#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        string s;
        cin >> s;
        int n = s.size();
        ll zcnt = 0;
        ll ocnt = 0;
        
       
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                ocnt++;
            else
                zcnt++;
        }

       
        if (zcnt == ocnt) {
            cout << 0 << endl;
            continue;
        }

      
        string t;
        int i ;
        for ( i = 0; i < n; i++) {
           
            if (s[i] == '0') {

               if( ocnt> 0 )
                ocnt--;
                else break ;
            } else {
              if( zcnt> 0)
                zcnt--;
              else break ;
            }
        }

       
        cout << n - i << endl;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
    return 0;
}
