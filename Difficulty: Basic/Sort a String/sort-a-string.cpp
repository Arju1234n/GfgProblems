class Solution {
public:
    string sortString(string s) {

        vector<int> freq(26, 0);

        // Count frequency
        for(char ch : s) {
            freq[ch - 'a']++;
        }

        string ans = "";

        // Rebuild sorted string
        for(int i = 0; i < 26; i++) {
            while(freq[i] > 0) {
                ans += char(i + 'a');
                freq[i]--;
            }
        }

        return ans;
    }
};