#include<bits/stdc++.h>
using namespace std;

#define yes cout << "YES"<<endl; 
#define no cout << "NO" <<endl;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
ll gcd(ll a, ll b) {
    return (a == 0) ? b : gcd(b % a, a);
}

ll lcm(ll a, ll b) {
    return (a / gcd(a, b)) * b;  
}
void ip(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   ll x ;
   cin>>x ;
   a.push_back(x)  ;
  }
}
void op2(  vll &a ){


for(auto &value : a ){
   cout<<value<<" " ;
}
cout<<endl;
}


void op(ll &n , vll &a ){
  for (ll i = 0; i <n; i++)
  {
   
   cout<<a[i]<< " " ;
  }
  cout<<endl;
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
     intervals.push_back({ 
    max(0ll, static_cast<long long>(index) - values[index] + 1), 
    min(static_cast<long long>(size) - 1, static_cast<long long>(index) + values[index] - 1) 
});

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

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);
     solve() ;
   
}