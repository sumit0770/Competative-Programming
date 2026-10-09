#include <bits/stdc++.h>
using namespace std;

// Function to check if b is a subsequence of a
bool isSubsequence(string a, string b) {
    int j = 0;  // Pointer for b
    for (int i = 0; i < a.size() && j < b.size(); i++) {
        if (a[i] == b[j]) {
            j++;  // Move to the next character in b
        }
    }
    return j == b.size(); // If we matched all characters of b, it's a subsequence
}

void solve() {
    string a, b;
    cin >> a >> b;
    
   
    if (!isSubsequence(a, b)) {
        cout << -1 << endl;
        return;
    }

    int n = a.size(), m = b.size();
    if( m > n ){
        cout<<-1<<endl;
        return ;
    }
    if( b  == a) {
        cout<<0<<endl;
        return ;
    }
    vector<int> mark(n, 0); 

    int j = m - 1; 
    
    

    for (int i = n - 1; i >= 0; i--) {
        if (j >= 0 && a[i] == b[j]) {
            mark[i] = 1;
            j--; 
        }
    }

   

    // for (int i = 0; i < n; i++) {
    //     cout << mark[i] << " ";
    // }
    // cout << endl;
    int cost  = 0;
    int hashes = 0;
    for(int i=0;i<mark.size();i++){
        if(mark[i] == 1) hashes++;
        else cost += hashes+1;
    }
    cout<<cost<<endl;

}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
