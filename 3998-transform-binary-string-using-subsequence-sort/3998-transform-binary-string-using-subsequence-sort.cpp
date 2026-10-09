class Solution {
public:
    vector<bool> transformStr(string s, vector<string>& strs) {
        int n = s.size(), ones = count(s.begin(), s.end(), '1');
        vector<bool> ans;

        for (string t : strs) {
            int o = count(t.begin(), t.end(), '1');
            int q = count(t.begin(), t.end(), '?');

            if (o > ones || o + q < ones) {
                ans.push_back(false);
                continue;
            }

            int need = ones - o;
            for (int i = n - 1; i >= 0; i--)
                if (t[i] == '?')
                    t[i] = (need-- > 0 ? '1' : '0');

            bool ok = true;
            int ps = 0, pt = 0;
            for (int i = 0; i < n; i++) {
                ps += (s[i] == '1');
                pt += (t[i] == '1');
                if (pt > ps) {
                    ok = false;
                    break;
                }
            }
            ans.push_back(ok);
        }
        return ans;
    }
};