// #include<bits/stdc++.h>
// using namespace std;

// #define yes cout << "YES"<<endl; 
// #define no cout << "NO" <<endl;
// typedef long long ll;
// typedef vector<ll> vll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;
// ll gcd(ll a, ll b) {
//     return (a == 0) ? b : gcd(b % a, a);
// }

// ll lcm(ll a, ll b) {
//     return (a / gcd(a, b)) * b;  
// }
// void ip(ll &n , vll &a ){
//   for (ll i = 0; i <n; i++)
//   {
//    ll x ;
//    cin>>x ;
//    a.push_back(x)  ;
//   }
// }
// void op2(  vll &a ){


// for(auto &value : a ){
//    cout<<value<<" " ;
// }
// cout<<endl;
// }


// void op(ll &n , vll &a ){
//   for (ll i = 0; i <n; i++)
//   {
   
//    cout<<a[i]<< " " ;
//   }
//   cout<<endl;
// }
//  void solve(){
//   string s ;cin>>s ;
//   string t ; cin>>t ;

//   ll m = t.size() ;
//   ll n = s.size() ;

//   if( m > n ){
//     no ;
//     return ;
//   }
//   int index = 0;
//   //int id= 0;
//   for (int  i = 0; i < n; i++)
//   {
//     if( s[i] == t[index]   ){
//        index++;
//     }
//     else if( s[i]=='?'){
//        if( index < m)
//        {
//         s[i] = t[index] ;
//         index++;
//        }
//        else{ s[i] = 'a' ;}
       
//     }
//     if ( index == m ){
//         yes ;
//        cout<<s<<endl;
//         return ;
        
//     }
//   }
//   no 
  









// }


// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//   int t ;
//   cin>>t ;
//   while( t-- ){
//      solve() ;
//  }
// }
#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;
}

void solve() {
    string s, t;
    cin >> s >> t;

    ll m = t.size();
    ll n = s.size();

    if (m > n) {
        no;
        return;
    }

    int index = 0; 
    
    for (int i = 0; i < n; i++) {
        if (s[i] == t[index]) {
            index++;
        } else if (s[i] == '?') {
            if (index < m) {
                s[i] = t[index];
                index++;
            } else {
                s[i] = 'a'; 
            }
        }
        if (index == m) { 
            yes;
            for(auto &ch :s){
              if( ch == '?'){
                ch = 'a' ;
              }
            }
            cout << s << endl; // Output modified string
            return;
        }
    }

    no;
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
