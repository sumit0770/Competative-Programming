#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;  
    while (T--) {
        int N;
        cin >> N; 
        
      
        int hp = N / 2;
        
       
        int a = hp / 2;
        int b = hp - a;
        
       
        cout << a * b << endl;
    }
    return 0;
}
