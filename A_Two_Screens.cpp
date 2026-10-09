#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
int countStartingEqualElements(const string &s, const string &t) {
    int n = min(s.size(), t.size()); 
    int count = 0; 
    for (int i = 0; i < n; i++) {
        if (s[i] == t[i]) {
            count++;
        } else {
         
            break; 
        }
    }

    return count; 
}

void solve() {

    int testcases;
     cin>>testcases;
       while( testcases--){
        string s ;
        string t ;
        cin>>s>>t;

        int ans ; 
        int n = min( s.size() , t.size());
   
       
        int result = s.size() + t.size() - countStartingEqualElements(s ,t )+ 1 ;
        if( countStartingEqualElements(s ,t ) == 0){
          cout<<result -1 <<endl;
        }
        else
{cout<<result<<endl;}

        }
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}