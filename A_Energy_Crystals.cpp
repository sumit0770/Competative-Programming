#include <bits/stdc++.h>
using namespace std;


int log2_floor(long long x) {
    int k = 0;
    while (x >>= 1) ++k;
    return k;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x;
        cin >> x;

        int k = log2_floor(x);
        vector < pair < int , int > > pk ; 

        for( int i = 0; i < 1e2 ; i++){
                pk.push_back( make_pair( k , i )) ;
        }
       sort( pk.begin() , pk.end()) ;
  long long  temp = pk[20].first * 2 ;
       cout<<temp + 3 <<endl;


        
       
        
       
    }
    return 0;
}
