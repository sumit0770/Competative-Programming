#include<bits/stdc++.h>
 
using namespace std;
 
#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
 
int main(){
 
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    string s ;
    cin>>s; 
ll cnt = 1 ;
ll maximum = 1 ;
    for ( ll i = 0; i <  s.size()    ; i++)
    {
 
       if(s[i] == s[i+1]){
       cnt++ ;
        
       }
       else{
          maximum = max( cnt , maximum) ;
          cnt = 1; 
       }
    }
   cout<<maximum<<endl;
    
 
    
}
// This code reads a string and counts the maximum number of consecutive identical characters in it.
// It initializes a counter for consecutive characters and updates the maximum count whenever a different character is encountered.
// Finally, it outputs the maximum count of consecutive identical characters found in the string.