class Solution {
public:
    bool findPair(vector<int> &arr, int x) {

        sort(arr.begin(), arr.end());

        int n = arr.size();
        int l = 0;
        int r = 1;

        while (r < n) {

            int diff = arr[r] - arr[l];

            if (l != r && diff == x)
                return true;

            else if (diff < x)
                r++;

            else
                l++;

            if (l == r)
                r++;
        }

        return false;
    }
};