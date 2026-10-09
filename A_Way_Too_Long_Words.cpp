\#include<bits/stdc++.h>
#include<bitset>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define int long long
 
 
using namespace std;
using namespace __gnu_pbds;
template<class T> using ordered_set =tree<T, null_type, less<T>, rb_tree_tag,tree_order_statistics_node_update>;
 

typedef long long ll;
#define endl "\n"
#define no cout << "NO\n"
#define ull unsigned long long
#define pb push_back
#define yes cout << "YES\n"
#define all(a) a.begin(), a.end()
const ll mod = 1e9 + 7;

const ll N = 1e7;
typedef vector<ll> vi;
vector<bool> primes(N,1);

ll binMultiply(ll a,ll b){ // complexity --> log n
   ll res=0;
   while(b>0){
       if(b&1) res=(res+a)%mod;
       a=(a+a)%mod;
       b=b>>1;
   }
   return res;
}

ll binExp(ll a,ll b){ // complexity --> log n
   ll res=1;
   while(b>0){
       if(b&1) res=(res*a)%mod;
       a=(a*a)%mod;
       b=b>>1;
   }
   return res;
}

ll b_to_int(string str){
   bitset<64> set(str);
   return set.to_ullong();
}

string int_to_b(ll n){
   string str = bitset<64>(n).to_string();
   ll i = str.find('1'); // remove leading zeros from str
   return str.substr(i);
}


ll modadd(ll a,ll b){ return (a%mod+b%mod)%mod; }
ll modsub(ll a,ll b){ return (a%mod-b%mod+mod)%mod; }
ll modmul(ll a,ll b){ return (a%mod*b%mod)%mod; }
ll moddiv(ll a,ll b){ return (a%mod*binExp(b,mod-2))%mod; }
ll modinv(ll a){ return binExp(a,mod-2); }
ll modpower(ll a,ll b){ return binExp(a,b); }

ll factorial(ll n){ // complexity --> O(n)
   ll fact=1;
   for(ll i=1;i<=n;i++) fact=(fact*i)%mod;
   return fact;
}


void solve() {
    int size;
    cin >> size;
    vector<int> values(size);
    
    for (int index = 0; index < size; index++) {
        cin >> values[index];
    }

    vector<pair<int, int>> intervals;
    for (int index = 0; index < size; ++index) {
        intervals.push_back({max(0ll, index - values[index] + 1), min(size - 1, index + values[index] - 1)});
    }

    vector<int> intersectionCount(size, 0);
    
    // Sweep line technique
    for (auto [start, end] : intervals) {
        intersectionCount[start]++;
        if (end + 1 < size) {
            intersectionCount[end + 1]--;
        }
    }

    for (int index = 1; index < size; index++) {
        intersectionCount[index] += intersectionCount[index - 1];
    }

    int left = -1;
    for (int index = 0; index < size; index++) {
        if (intersectionCount[index] == size) {
            left = index;
            break;
        }
    }

    if (left == -1) {
        cout << "0" << endl;
        return;
    }

    int right = left;
    while (intersectionCount[right] == size && right < size) {
        right++;
    }
    right--;

    // Construction verification
    vector<int> construction(size, 0);
    set<int> uniqueValues;
    uniqueValues.insert(1);
    int nextValue = 2;
    construction[left] = 1;
    int prevValue = -1;

    for (int index = 0; index < left; ++index) {
        if (index == 0) {
            construction[index] = values[index];
            prevValue = values[index];
            uniqueValues.insert(values[index]);
        } else {
            construction[index] = min(prevValue - 1, values[index]);
            prevValue = construction[index];
            uniqueValues.insert(construction[index]);
        }
    }

    while (uniqueValues.find(nextValue) != uniqueValues.end()) {
        nextValue++;
    }

    for (int index = left + 1; index < size; ++index) {
        construction[index] = nextValue;
        uniqueValues.insert(nextValue);
        while (uniqueValues.find(nextValue) != uniqueValues.end()) {
            nextValue++;
        }
    }

    // Validation
    for (int index = 0; index < size; index++) {
        if (construction[index] > values[index]) {
            cout << "0" << endl;
            return;
        }
    }

    cout << right - left + 1 << endl;
}



int32_t main(){

   ios::sync_with_stdio(false);
   cin.tie(NULL);

   cout.tie(NULL);

   int testcases;
   cin>>testcases;

   while(testcases--){
   solve();
   }
   return 0;
}