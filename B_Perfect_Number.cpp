#include <iostream>
#include <vector>
using namespace std;

const int LIMIT = 10007; 


int digitsum(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}


void precompute(vector<int>& number) {
    for (int i = 1; number.size() < LIMIT; i++) {
        if (digitsum(i) == 10) {
            number.push_back(i);
        }
    }
}

void solve(const vector<int>& number) {
    int n;
    cin >> n;
    cout << number[n - 1] << endl; 
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    
    vector<int> number;
    precompute(number);

   
        solve(number);
    

    return 0;
}
