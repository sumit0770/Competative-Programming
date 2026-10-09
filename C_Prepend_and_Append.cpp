#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main(){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t = 1;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;

        vector<ll> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        bool flag_1 = false;
        for(ll i = 1; i<=n-k+1; i++){
            if(arr[i] != 1){
                flag_1 = true;
                break;
            }
        }

        if(flag_1){
            cout<<1<<endl;
            continue;
        }

        bool flag_2 = false;
        for(ll i = 1; i<=n-k; i++){
            if(arr[i+1] != 2){
                flag_2 = true;
                break;
            }
        }

        if(!flag_2 && k>=4){
            if(k>3){
                for(ll i = 1; i<=n-k+1; i++){
                    if(i+2<n-k+4 && arr[i+2] != 2){
                        flag_2 = true;
                        break;
                    }
                }
            }
        }
        
        if(flag_2){
            cout<<2<<endl;
            continue;
        }
        else cout<<k/2+1<<endl;



    }
}