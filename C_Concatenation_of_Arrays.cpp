#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
     int n;
          cin >> n;
            vector<pair<int, int> > a(n);
           for (int i = 0; i < n; ++i) {
            int x , y ;
            cin>>x>>y;
              a[i].first = x ;
              a[i].second = y ;
            }
     
      sort(a.begin(), a.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
   
        if (min(p1.first, p1.second) == min(p2.first, p2.second)) {
       
           return (p1.first + p1.second) < (p2.first + p2.second);
        }
        return min(p1.first, p1.second) < min(p2.first, p2.second);
});

            
            for (int i= 0; i < n ; i++) {
                cout <<a[i].first <<" "<< a[i].second << " ";
            }
            cout << endl;
 
        }
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}