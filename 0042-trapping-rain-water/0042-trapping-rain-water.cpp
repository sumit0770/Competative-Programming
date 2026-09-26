class Solution {
public:
    int trap(vector<int>& h) {
        int n = h.size();

        vector<int> pmax(n, 0);
        vector<int> smax(n, 0);

       
        pmax[0] = h[0];

        for (int i = 1; i < n; i++) {
            pmax[i] = max(pmax[i - 1], h[i]);
        }

       
        smax[n - 1] = h[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            smax[i] = max(smax[i + 1], h[i]);
        }

        int ans = 0;

        for (int i = 0; i < n; i++) {
            ans += min(pmax[i], smax[i]) - h[i];
        }

        return ans;
    }
};