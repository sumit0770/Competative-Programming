#include <bits/stdc++.h>
using namespace std;

int min_jumps(vector<int>& nums) {
    int n = nums.size();
    if (n <= 1) return 0;       
    if (nums[0] == 0) return -1; 

    int jumps = 0;          
    int curr_reach = 0;   
    int max_reach = 0;    

    for (int i = 0; i < n - 1; i++) {
        max_reach = max(max_reach, i + nums[i]);

        if (i == curr_reach) {
            jumps++;
            curr_reach = max_reach;

            if (curr_reach >= n - 1)
                return jumps;
        }
    }

    return -1; 
}

int main() {
    vector<int> nums1 = {2, 3, 1, 1, 4};
    cout << "Output: " << min_jumps(nums1) << endl; 

    vector<int> nums2 = {3, 2, 1, 0, 4};
    cout << "Output: " << min_jumps(nums2) << endl; 

    return 0;
}
