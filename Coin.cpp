#include <bits/stdc++.h>
using namespace std;

int coinChange(vector<int>& coins, int amount) {
    vector<int> dp(amount + 1, INT_MAX);
    dp[0] = 0; 

    for (int coin : coins) {
        for (int i = coin; i <= amount; i++) {
            if (dp[i - coin] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coin] + 1);
            }
        }
    }

    return (dp[amount] == INT_MAX) ? -1 : dp[amount];
}

int main() {
    vector<int> coins = {1, 2, 5};
     vector<int> coins2 = {2};
      vector<int> coins3 = {1};

    int amount = 11;
   

    int result = coinChange(coins, amount);
    int ans2 = coinChange(coins2, 3);
    int ans3 = coinChange(coins3, 0);
   int t = 3 ;
   
   cout<<result<<endl;
    cout<<ans2<<endl;
    cout<<ans3<<endl;


    return 0;
}
