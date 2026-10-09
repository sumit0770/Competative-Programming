// #include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


string balancedShuffle(const string& s) {
    int n = s.length();
    
   
    vector< tuple <int, int, char> > table;
    
    int balance = 0;
    
 
    for (int i = 0; i < n; i++) {
        if (s[i] == '(') {
            balance++;
        } else {
            balance--;
        }
        table.push_back({balance, i + 1, s[i]});
    }
    
    
    sort(table.begin(), table.end(), [](const auto& a, const auto& b) {
        if (get<0>(a) != get<0>(b)) {
            return get<0>(a) < get<0>(b);
        } else {
            return get<1>(a) > get<1>(b); 
        }
    });
    
   
    string result;
    for (const auto& t : table) {
        result.push_back(get<2>(t));  
    }
    
    return result;
}

int main() {
    string s;
    cin >> s;  
    
   
    string result = balancedShuffle(s);
    cout << result << endl;
    
    return 0;
}
