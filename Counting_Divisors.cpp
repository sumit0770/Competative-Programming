// #include<bits/stdc++.h>
// using namespace std;

// #define yes cout << "YES"<<endl; 
// #define no cout << "NO" <<endl;
// typedef long long ll;
// typedef vector<ll> vll;
// typedef vector<int> vi;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;


// int   divisor( ll n ){
//  vector<int > div ;
// for (int  i =1 ; i <= sqrt(n); i++)
// {
//     if( n %  i == 0 )
//      {
//        div.push_back(i) ;
//        if( n / i != i ) div.push_back(n /i ) ;

//     }

// }
// // for (int  i = 0; i < div.size(); i++)
// // {
// //   cout<<div[i]<<" " ;
// // }
// // cout<<endl;
// // //return div.size() ;
// return div.size() ;
// }



// void solve() {

//     int testcases;
//      cin>>testcases;
//        while( testcases--){
//        ll  n ;
//         cin>>n;
//      cout<<divisor(n)<<endl; 
 
//         }
   
// }

// int main(){

//     ios::sync_with_stdio(false);
//     cin.tie(NULL);
//      solve() ;
   
// }
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int MAXN = 1000000;  

vector<int> divisors(MAXN + 1, 0);  

void precomputeDivisors() {
    for (int i = 1; i <= MAXN; i++) {
        for (int j = i; j <= MAXN; j += i) {
            divisors[j]++;
        }
    }
}

void solve() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        ll n;
        cin >> n;
        cout << divisors[n] << endl;  
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    
    precomputeDivisors();
    
   
    solve();

    return 0;
}
