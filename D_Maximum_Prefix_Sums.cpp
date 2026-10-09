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
//DSU Class for Union-Find (Disjoint Set Union)
class DSU {
    vector<int> rank, parent , size;

public:
    DSU(int n) {
        rank.resize(n + 1, 0);
        parent.resize(n + 1);
        size.resize( n + 1 , 1 );

        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    int findUpar(int node) {
        if (node == parent[node])
            return node;

        return parent[node] = findUpar(parent[node]);
    }

    void unionByRank(int u, int v) {
        int ulu = findUpar(u);
        int ulv = findUpar(v);

        if (ulu == ulv)
            return;

        if (rank[ulu] < rank[ulv]) {
            parent[ulu] = ulv;
        }
        else if (rank[ulv] < rank[ulu]) {
            parent[ulv] = ulu;
        }
        else {
            parent[ulv] = ulu;
            rank[ulu]++;
        }
    }
    void unionBySize( int u , int v ){
         int ulu = findUpar(u);
         int ulv = findUpar(v);
         if( ulu == ulv ) return ;
            if( size[ulu] < size[ulv] ){
                parent[ulu] = ulv ;
                size[ulv] += size[ulu] ;
            }
            else{
                parent[ulv] = ulu ;
                size[ulu] += size[ulv] ;
            }
    }

};
ll M=-1e12;
 void solve(){
		int n;
		string s;
		cin>>n>>s;
		vector<ll>a(n+1);
		vector<ll>c(n+1);
		vector<ll>ans(n+1,M);
		for(int i=1;i<=n;i++) cin>>a[i];
		for(int i=1;i<=n;i++) cin>>c[i];
		ll sum=0,p=-1;
		for(int i=1;i<=n;i++)
		{
			if(s[i-1]=='0') p=i;
			else ans[i]=a[i];
			sum+=ans[i];
			if((i==1||c[i]!=c[i-1])&&p!=-1)
			{
				ans[p]+=c[i]-sum;
				sum=c[i];
			}
		}
		ll sum1=0,maxn=-1e17;
		bool ok=true;
		for(int i=1;i<=n;i++)
		{
			sum1+=ans[i];
			maxn=max(maxn,sum1);
			if(maxn!=c[i])
			{
				cout<<"No"<<"\n";
				ok=false;
				break;
			}
		}
		if(!ok) return ;
		cout<<"Yes"<<"\n";
		for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
		cout<<"\n";


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
