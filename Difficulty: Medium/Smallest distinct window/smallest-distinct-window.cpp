class Solution {
public:
    int findSubString(string &str) {

        unordered_set<char> st;

        // Count total distinct characters
        for (char ch : str)
            st.insert(ch);

        int required = st.size();

        unordered_map<char, int> mp;

        int left = 0;
        int count = 0;
        int ans = INT_MAX;

        for (int right = 0; right < str.size(); right++) {

            mp[str[right]]++;

            if (mp[str[right]] == 1)
                count++;

            while (count == required) {

                ans = min(ans, right - left + 1);

                mp[str[left]]--;

                if (mp[str[left]] == 0) {
                    count--;
                }

                left++;
            }
        }

        return ans;
    }
};