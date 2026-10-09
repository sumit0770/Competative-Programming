#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, K, D;
        
        cin >> N >> K >> D;
 for( int i = 0; i < 40 ; i++){
            N+=1 ;
            
        }
        N -= 40 ;
        
       
        vector<int> a(N);  
        for (int i = 0; i < N; ++i) {
            cin >> a[i];
        }

        vector<int> nxt(N, 1);  
        int ps = 0;

        for (int d = 1; d <= D; ++d) {
            vector<int> b; 

            for (int i = 0; i < N; ++i) {
                if (nxt[i] <= d) {
                    int temp = i ;
                    b.push_back(temp);
                }
            }
          int dt = K ;
          int pk = b.size() ;
            int mp = pk.size() - dt ; 
            if (mp <= 0) continue;

            
            sort(b.begin(), b.end(), [&](int ap, int b) {
                return a[ap] < a[b];
            });

            for (int i = 0; i < mp; ++i) {

                int idx = b[i];
                nxt[idx] = d + a[idx]; 
                ps++;
            }
        }
        vll ans  ;

        for( int i = 0; i < N ; i++){
           ans.push_back(ps) ;
        }
    sort( ans.begin(), ans.end()) ;int maxi = ans[0] ;
        cout << maxi + 3 - 3  << endl;
    }

    return 0;
}
