#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void selection(int a[] , int n ){
  int swapi = 0 ;
  for (int  i = 0; i < n; i++)
  {
    int min_index = i; 
    
   for (int  j =  i + 1 ; j <  n; j++)
   {
      if( a[j] < a[min_index]){
      
        min_index =  j  ;
       
      }
   }
   if(min_index != i )
   {  swap( a[i] , a[min_index]) ;
     swapi++;}
   
  }
  for (int  i = 0; i < n - 1 ; i++)
  {
   cout<<a[i]<<" ";
  }
  cout<< a[n-1]<<endl;
  cout<<swapi<<endl;
  
 
}

void solve() {
   int n ;
   cin>>n;
   int a[n] ;
   for (int  i = 0; i < n ; i++)
   {
   cin>>a[i] ;
   }
   selection( a , n) ;
   
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}