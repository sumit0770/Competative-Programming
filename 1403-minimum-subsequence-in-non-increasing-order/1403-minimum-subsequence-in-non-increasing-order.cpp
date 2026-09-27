class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums ) {

        sort(nums.rbegin(), nums.rend());

        int total = accumulate(nums.begin(), nums.end(), 0);

        int taken = 0;
        vector<int> ans;

        for (int x : nums) {
            taken += x;
            ans.push_back(x);

            if (taken > total - taken)
                break;
        }

        return ans;
    }
};