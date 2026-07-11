class Solution {
public:
    vector<int> removeDuplicates(vector<int> &arr) {

        if(arr.empty())
            return {};

        int slow = 0;

        for(int fast = 1; fast < arr.size(); fast++) {

            if(arr[fast] != arr[slow]) {
                slow++;
                arr[slow] = arr[fast];
            }
        }

        vector<int> ans;

        for(int i = 0; i <= slow; i++) {
            ans.push_back(arr[i]);
        }

        return ans;
    }
};