#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int  rd(const string& binaryString) {
   string result;
   int zcny = 0;
    int n = binaryString.size();

    for (int i = 0; i < n; ++i) {
        if (binaryString[i] == '0') {
            result += '0';
            zcny++;
            while (i < n - 1 && binaryString[i + 1] == '0') {
                ++i;
            }
        } else {
            result += binaryString[i];
        }
    }

    return zcny;
}
void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int n, m;
        cin >> n >> m;
        string a, b;
        cin >> a >> b;
        string p = max( a ,b ) ;
        string q = min( a, b ) ;
        string  t1(p.length(),'0');
        string  t2(q.length(),'0');

        for(int i=0;i<q.length();i++){
          if(q[i] == p[i]){
            t2[i] = '1';
            t1[i] = '1';
          } 
        } 
        cout<<t1<<" "<<t2<<endl;
       cout<<rd(t1) + rd(t2)<<endl; 
  
    
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    solve();
}
