#include <iostream>
#include <vector>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}



void solve1( vector<int> &is_prime) {
  
       is_prime[0] = is_prime[1] = false; 
       for(int i =  2 ; i * i <= 100007 ; i++){
        if( is_prime[i]){
        for(int  j = i * i ; j <=100007 ; j+= i){
            is_prime[j] = false ;
        }}
       }
}
 void solve(){
  int n;
  cin>>n ;
  vector<int> is_prime(100009 , true );
  solve1(is_prime) ;

if( n >  2 )
   cout<<2<<endl; 
else cout<<1<<endl;


for(int i = 2 ; i < n + 2 ; i++){
    if( is_prime[i] )
        cout<<1<<" ";
    else
        cout<<2<<" ";
}


}


int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
  int t = 1  ;

  while( t-- ){
     solve() ;
 }
}

// using namespace std;

// int sieve[100005];

// int main()
// {
// 	int i, n, j;
// 	cin>>n;
// 	for(i=2; i<=n+1; i++)
// 	{
// 		if(!sieve[i])
// 			for(j=2*i; j<=n+1; j+=i)
// 				sieve[j]=1;
// 	}
	
// 	if(n>2)
// 		cout<<"2\n";
// 	else
// 		cout<<"1\n";

// 	for(i=2; i<=n+1; i++)
// 	{
// 		if(!sieve[i])
// 			cout<<"1 ";
// 		else
// 			cout<<"2 ";
// 	}

// 	return 0;
// }