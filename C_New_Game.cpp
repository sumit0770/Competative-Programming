#include <bits/stdc++.h>
using namespace std;

#define yes cout << "YES" << endl
#define no cout << "NO" << endl
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

void solve() {
    int size, limit;
    cin >> size >> limit;
    vector<int> elements(size);
    
    for(int i = 0; i < size; i++) { 
        cin >> elements[i]; 
    }
    
    sort(elements.begin(), elements.end());
    int maxCount = 0;  
    int currentRange = 0; 
    int distinctCount = 1;  
    int startIndex = 0;  

    for(int i = 1; i < size; i++) {
        if(elements[i] != elements[i - 1]) {
            if(elements[i] > elements[i - 1] + 1) {
                maxCount = max(maxCount, currentRange);
                currentRange = 0;
                distinctCount = 0;
                startIndex = i; 
            }
            distinctCount++;
        }
        currentRange++;

       
        for (; distinctCount > limit; startIndex++) {
            if (elements[startIndex] != elements[startIndex + 1]) {
                distinctCount--; 
            }
            currentRange--; 
        }       

        maxCount = max(maxCount, currentRange);
    }
    
    cout << maxCount + 1 << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    
    int testCases; 
    cin >> testCases;
    while(testCases--) {
        solve();
    }
}
