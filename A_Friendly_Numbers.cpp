#include<iostream>
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
 void solve(){
vector<pair<ll, ll>> data(1);
   cin >> data[0].first >> data[0].second ;

   ll a = data[0].first;
   ll b = data[0].second;

   
    unordered_map<int, bool> chk;
    
   
    chk[1] = (a * 3 < b * 2);
    chk[2] = (a * 3 >= ( b * 2) - 1  && a > b && a ==b );

  
    bool flag = chk[1] || chk[2];

   if( flag)
     cout<<"ALICE\n";
   else
     cout<<"BOB\n";

   


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t ;
  cin>>t ;
  while( t-- ){
     solve() ;
 }
}
