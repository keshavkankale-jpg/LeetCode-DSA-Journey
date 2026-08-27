class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int n = s.size();

        vector<int> freq(26, 0);

        for (char c : s)
            freq[c - 'a']++;

        for (int i = n - 1; i >= 0; i--) {

            // Check whether target[0...i-1] can be formed
            vector<int> cnt = freq;

            bool ok = true;

            for (int j = 0; j < i; j++) {
                int x = target[j] - 'a';

                if (--cnt[x] < 0) {
                    ok = false;
                    break;
                }
            }

            if (!ok)
                continue;

            // Find smallest character > target[i]
            int x = target[i] - 'a';

            for (int c = x + 1; c < 26; c++) {

                if (cnt[c] == 0)
                    continue;

                string ans = target.substr(0, i);
                ans += char('a' + c);

                cnt[c]--;

                for (int k = 0; k < 26; k++) {
                    ans.append(cnt[k], char('a' + k));
                }

                return ans;
            }
        }

        return "";
    }
};