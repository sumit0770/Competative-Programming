#define ll long long
class Solution {
public:
    int find(int i,vector<ll>&parent){
        if(parent[i]!=i){
            parent[i]=find(parent[i],parent);
        }
        return parent[i];
    }
    void Union(int x,int y,vector<ll>&rank,vector<ll>&parent){
        if(rank[x]>=rank[y]){
            rank[x]+=rank[y];
            parent[y]=x;
        }
        else{
            rank[y]+=rank[x];
            parent[x]=y;
        }
    }
    vector<long long> maximumSegmentSum(vector<int>& nums, vector<int>& rQ) {
        ll n = nums.size();
        vector<ll>parent(n),rank(n,0);
        for(int i=0;i<n;++i){
            parent[i]=i;
        }
        vector<ll>res(n);
        for(int i=rQ.size()-1;i>0;--i){
            int index = rQ[i];
            int value = nums[index];
            rank[index]=value;
            if(index>0&&rank[index-1]!=0){
                int x = find(index,parent);
                int y = find(index-1,parent);
                Union(x,y,rank,parent);
            }
            if(index+1<nums.size()&&rank[index+1]!=0){
                int x = find(index,parent);
                int y = find(index+1,parent);
                Union(x,y,rank,parent);
            }
            int x = find(index,parent);
            res[i-1]=max(res[i],rank[x]);
        }
        return res;
    }
};