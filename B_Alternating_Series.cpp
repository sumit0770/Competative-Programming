#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
    int t ;
    cin>>t ;
    while(t--)
   { int n;
    cin >> n;

    vector<int> a(n + 1); 

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 1) {
            
            a[i] = -1;
        } else {
            
            if (i >= 2 && i <= n - 1) {
                a[i] = 3;
            } else if (i == n) {
                a[i] = 2;
            }
        }
    }

    
    for (int i = 1; i <= n; i++) {
        cout << a[i] << " ";
    }
    cout << "\n";
}
   
}
