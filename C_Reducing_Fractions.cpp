#include<bits/stdc++.h>
using namespace std;

#define yes cout<<"YES\n";
#define no cout<<"NO\n";

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vll;

void spfSieve(vector<int> &spf, int mx){
    for(int i=0;i<=mx;i++) spf[i]=i;

    for(int i=2;i*i<=mx;i++){
        if(spf[i]==i){
            for(int j=i*i;j<=mx;j+=i){
                if(spf[j]==j) spf[j]=i;
            }
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n,m;
    cin>>n>>m;

    vi num(n),den(m);

    int mx=1;

    for(int i=0;i<n;i++){
        cin>>num[i];
        mx=max(mx,num[i]);
    }

    for(int i=0;i<m;i++){
        cin>>den[i];
        mx=max(mx,den[i]);
    }

    vector<int> spf(mx+1);
    spfSieve(spf,mx);

    vector<int> vis1(mx+1,0),vis2(mx+1,0);

    for(auto x:num){
        while(x!=1){
            int p=spf[x];
            vis1[p]++;
            x/=p;
        }
    }

    
    for(auto x:den){
        while(x!=1){
            int p=spf[x];
            if(vis1[p]>0) vis1[p]--;
            else vis2[p]++;
            x/=p;
        }
    }

   
    for(int i=0;i<n;i++){
        int x=num[i];
        int ans=1;

        while(x!=1){
            int p=spf[x];
            if(vis1[p]>0){
                ans*=p;
                vis1[p]--;
            }
            x/=p;
        }

        num[i]=ans;
    }

   
    for(int i=0;i<m;i++){
        int x=den[i];
        int ans=1;

        while(x!=1){
            int p=spf[x];
            if(vis2[p]>0){
                ans*=p;
                vis2[p]--;
            }
            x/=p;
        }

        den[i]=ans;
    }

    cout<<n<<" "<<m<<"\n";

    for(int x:num) cout<<x<<" ";
    cout<<"\n";

    for(int x:den) cout<<x<<" ";
    cout<<"\n";

    return 0;
}