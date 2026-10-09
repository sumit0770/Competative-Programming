#include <bits/stdc++.h>
using namespace std;

const int INF = 1e9;
int dp[20][200][10][2]; // DP memoization table
string num;
int mUpper;

// Recursive function for Digit DP
int solve(int pos, int coinsUsed, int carry, bool hasSeven) {
    // Base case: If all digits processed
    if (pos == num.size()) 
        return hasSeven ? coinsUsed : INF;

    // Memoization check
    if (dp[pos][coinsUsed][carry][hasSeven] != -1) 
        return dp[pos][coinsUsed][carry][hasSeven];

    int &ans = dp[pos][coinsUsed][carry][hasSeven];
    ans = INF;

    int digit = num[pos] - '0'; // Current digit
    int newNum = digit + carry; // Apply carry from previous place

    // Try placing 0 to mUpper coins at this position
    for (int add = 0; add <= mUpper; add++) {
        int newVal = newNum + add * 9;
        int newCarry = newVal / 10;
        int newDigit = newVal % 10;
        
        // Recur for next position
        ans = min(ans, solve(pos + 1, coinsUsed + add, newCarry, hasSeven || (newDigit == 7)));
    }

    return ans;
}

int findMinOperations(int n) {
    num = to_string(n);
    memset(dp, -1, sizeof(dp));

    // Try increasing mUpper until a valid solution is found
    for (mUpper = 1; mUpper <= 18; mUpper++) {
        int result = solve(0, 0, 0, false);
        if (result != INF) return result;
    }
    
    return -1; // Should never reach here
}

int main() {
    int t ;
    cin>>t ;
    while(t--)

    {int n;
    cin >> n;
    cout << findMinOperations(n) << endl;}
    return 0;
}
