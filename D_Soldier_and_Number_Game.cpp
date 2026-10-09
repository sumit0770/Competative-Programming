#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES\n";
#define no cout << "NO\n";

typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define all(x) (x).begin(), (x).end()

ll gcd(ll a,ll b){
    return (a==0)?b:gcd(b%a,a);
}

class DSU{
    vector<int> rank,parent,size;

public:
    DSU(int n){
        rank.resize(n+1,0);
        parent.resize(n+1);
        size.resize(n+1,1);

        for(int i=0;i<=n;i++)
            parent[i]=i;
    }

    int findUpar(int node){
        if(node==parent[node]) return node;
        return parent[node]=findUpar(parent[node]);
    }

    void unionByRank(int u,int v){
        int pu=findUpar(u);
        int pv=findUpar(v);

        if(pu==pv) return;

        if(rank[pu]<rank[pv]) parent[pu]=pv;
        else if(rank[pv]<rank[pu]) parent[pv]=pu;
        else{
            parent[pv]=pu;
            rank[pu]++;
        }
    }

    void unionBySize(int u,int v){
        int pu=findUpar(u);
        int pv=findUpar(v);

        if(pu==pv) return;

        if(size[pu]<size[pv]){
            parent[pu]=pv;
            size[pv]+=size[pu];
        }
        else{
            parent[pv]=pu;
            size[pu]+=size[pv];
        }
    }
};

void sp(vector<int> &spf,int mx){

    for(int i=1;i<=mx;i++)
        spf[i]=i;

    for(int i=2;i<=mx;i++){
        if(spf[i]==i){
            for(int j=i;j<=mx;j+=i){
                if(spf[j]==j)
                    spf[j]=i;
            }
        }
    }
}

void numdiv(vector<int> &div,vector<int> &spf,int mx){

    for(int i=1;i<=mx;i++){
        int num=i;
        while(num!=1){
            div[i]++;
            num/=spf[num];
        }
    }
}

int main(){

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    vector<pair<int,int>> q(t);

    int mx=0;

    for(int i=0;i<t;i++){
        cin>>q[i].first>>q[i].second;
        mx=max(mx,q[i].first);
    }

    vector<int> spf(mx+1);
    vector<int> div(mx+1);
    vector<long long> pref(mx+1,0);

    sp(spf,mx);
    numdiv(div,spf,mx);

// main optimization 
    for(int i=1;i<=mx;i++){
        pref[i]=pref[i-1]+div[i];
    }

    for(auto &[x,y]:q){
        cout<<pref[x]-pref[y]<<"\n";
    }

   
}