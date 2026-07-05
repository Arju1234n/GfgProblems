class Solution {
public:
    int countFreq(vector<int>& arr, int target) {

        int left = 0, right = arr.size() - 1;
        int first = -1, last = -1;

        // First Occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                first = mid;
                right = mid - 1;
            }
            else if (arr[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        // Target nahi mila
        if (first == -1)
            return 0;

        // Reset
        left = 0;
        right = arr.size() - 1;

        // Last Occurrence
        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == target) {
                last = mid;
                left = mid + 1;
            }
            else if (arr[mid] < target) {
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }

        return last - first + 1;
    }
};