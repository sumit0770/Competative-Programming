#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long x, y, k;
        cin>>x>>y>>k ;
        
        x = ( x + k - 1) /k ; 
        y = ( y + k - 1) / k ;
         
        if( x > y){
            cout<< x * 2 -1 <<endl;
        }
        else{
            cout<<2 * y <<endl;
        }


       
       
    }
    return 0;
}
