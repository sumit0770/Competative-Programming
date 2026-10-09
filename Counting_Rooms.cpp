#include<bits/stdc++.h>
using namespace std;
 
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int n = 1e3 + 5 ;
int m = 1e3 + 5 ;
int nx[4] = { 0 , 0 , 1 , -1 } ;
int ny[4] = { 1 , -1 , 0 , 0 } ;
char  adj[1005][1005] ;
int vis[1005][1005] ;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}
 
 
bool is( int y , int x )
{
    if( y < 0 ) return false ;
    if( x <  0) return false ;
    if ( y >=n) return false ;
    if( x>= m ) return false ;
    if( adj[y][x] == '#') return false ;
    return true ;
}
 
void dfs( int y , int x ){
    vis[y][x] = 1;
    for( int i = 0; i  < 4 ; i++){
        int _y = y + ny[i] ;
        int _x = x + nx[i] ;
        if( is(_y, _x)   ){
            if(!vis[_y][_x]){
                 dfs(_y, _x) ;
            }
           
        }
    }
 
 
}
 
 int answer  = 0;
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
     
 cin >> n >> m;
 // int answer = 0;
    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j < m ; j++) {
        cin >> adj[i][j];
        vis[i][j] = 0;
      }
    }
    for (int i = 0 ; i < n ; i++) {
      for (int j = 0 ; j < m ; j++) {
        if (adj[i][j] == '.' && !vis[i][j]) {
          dfs(i, j);
          answer++;
        }
      }
    }
    cout << answer << endl;
    return 0;
 
 
}