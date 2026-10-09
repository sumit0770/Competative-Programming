#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl 
#define no cout << "NO" <<endl
typedef long long ll;

void solve(){
    int n;
    cin >> n;

    vector<int> ans;
    int x = 1;
    for(int p = 0; p < 7; p++){
        for(int i = 1; i <= 9; i++){
            ans.push_back(x * i);
        }
        x *= 10;
    }

    for(int i = ans.size() - 1; i >= 0; i--){
        if(n >= ans[i]){
            cout << i + 1 << endl;
            return;
        }
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}
