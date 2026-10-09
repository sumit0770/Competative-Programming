#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
#define all(x) (x).begin(), (x).end()
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}



int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
   map<string, int> idx;
    string w = "aa";

    int cnt = 1;

    for (w[0] = 'a'; w[0] <= 'z'; w[0]++) {

        for (w[1] = 'a'; w[1] <= 'z'; w[1]++) {

            if (w[0] != w[1]) {
                idx[w] = cnt++;
            }
        }
    }

    int t;
    cin >> t;

    while (t--) {

        string s;
        cin >> s;

        cout << idx[s] << '\n';
}
}