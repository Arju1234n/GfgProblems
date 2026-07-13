class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
         vector<int> ans;
        ans.push_back(1);

        for (int x = 2; x <= n; x++) {

            int carry = 0;

            for (int i = 0; i < ans.size(); i++) {

                int product = ans[i] * x + carry;

                ans[i] = product % 10;

                carry = product / 10;
            }

            while (carry > 0) {

                ans.push_back(carry % 10);

                carry /= 10;
            }
        }

        reverse(ans.begin(), ans.end());

        return ans;
    }
    
};