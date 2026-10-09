\
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(auto &x : a) cin >> x;
        
       
        int O = 0, ex = 0;
        for(auto x : a){
            if(x % 2) O++;
            else ex++;
        }
        
        int sum = 0; 
        int count = 0;
        int reo = O, re = ex;
        
        for(int i = 1; i <= n; i++){
            if(sum == 0){
                if(reo > 0){
                  
                    reo--;
                    sum = 1;
                    count++;
                }
                else if(re > 0){
                   
                    re--;
                   
                }
            }
            else{
                if(re > 0){
                   
                    re--;
                   
                    count++;
                }
                else if(reo > 0){
                    
                    reo--;
                    sum = 0;
                }
            }
        }
        
        cout << count << "\n";
    }
    
    return 0;
}