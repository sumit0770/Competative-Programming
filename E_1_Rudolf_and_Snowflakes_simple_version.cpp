#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n"
#define no cout << "NO\n"
typedef long long ll;

void helper(vector<int> &ans) {
    for(int i = 2; i < 1e6 + 2; i++) {
        int p = 3; 
        long long term = 1;
        while(p <= 20){
           
            long long power = 1;
            bool overflow = false;
            for(int k = 0; k < p; k++){
                if(power > (long long)1e12 / i) { 
                    overflow = true;
                    break;
                }
                power *= i;
            }
            if(overflow) break;

            long long t3 = (power - 1) / (i - 1);

            if(t3 <= 1e6) ans[(int)t3] = 1; 
            else break ;

            p++;
        }
    }
}


void solve(const vector<int> &ans) {
    ll n;
    cin >> n;
    if (ans[n]) yes;
    else no;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    vector<int> ans(1e6 + 5, 0);
    helper(ans);

    while (t--) solve(ans);
}
