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
int n ;
 void solve(){


cin>>n;
		bool ans=false;
		for(int i=1;i<=n;i++)
		{
			int x;
			cin>>x;
			if(x==100)
			 ans=true;
		}
		if(ans)
		 cout<<"Yes"<<endl;
		else
		 cout<<"No"<<endl;
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


//