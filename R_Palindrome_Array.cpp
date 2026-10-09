#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;


bool isPalindrome(    int a[] ,int s , int e  ){
    if( s >= e){
      return true ;
    }

    if( a[s] != a[e]){
      return false ;

    }

    return isPalindrome( a , s + 1 ,e - 1 ) ;
}
void solve() {

   int n ;
   cin>>n;
   int a[n] ;
   for (int  i = 0; i <n ; i++)
   {
    cin>>a[i] ;
   }
   if( isPalindrome( a , 0 , n -1  )){
    yes;
   }
   else{
    no;
   }
   
  
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}