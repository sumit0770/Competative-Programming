#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll>

void solve() {
    ll n;
    cin >> n;
    n = 2 * n;

    vll b(n);
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

   sort(b.rbegin() , b.rend()) ;
   
    ll sumOdd = 0, sumEven = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) sumEven += b[i];
        else sumOdd += b[i];
    }

   
    ll candidate = sumEven - sumOdd;
    if (candidate > 0 && candidate <= 1e18 && find(b.begin(), b.end(), candidate) == b.end()) {
       
        cout << candidate << " ";
        for (int i = 0; i < n; i++) {
            cout << b[i] << " ";
        }
        cout << endl;
        return;
    }

    
    ll a1 = *max_element(b.begin(), b.end());  
    b.erase(find(b.begin(), b.end(), a1));   

    
    ll sumB = accumulate(b.begin(), b.end(), 0LL);
    ll x = sumB - a1;

   
   

    
    // b.push_back(x);
    vll ans;
    // ans.push_back(x);
    // cout << a1 << " ";
    // for (int i = 0; i < n; i++) {
    //     cout << b[i] << " ";
    // }
    // cout << endl;
    // b.push_back(a1);
    b.push_back(a1);
    sort(b.begin(),b.end());
    // for(auto x: b){
    //     cout<<x<<" ";
    // }
    // cout<<endl;
    ll l = 0, r = n-1;
    for(ll i=0;i<n;i++){
        if(i%2 == 0){
            ans.push_back(b[r]);

            r--;            
        }
        else{
            ans.push_back(b[l]);
            l++;
        }
    }

    ll even_sum = 0;
    ll odd_sum = 0;
    for(ll i=0;i<n;i++){
        if(i%2 == 0) even_sum+= ans[i];
        else odd_sum+= ans[i];
    }

    cout<<even_sum-odd_sum<<" ";

    for(auto val : ans){
        cout<<val<<" ";
    }
    cout<<endl;


}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
