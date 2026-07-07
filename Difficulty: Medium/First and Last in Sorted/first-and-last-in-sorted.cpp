class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int left=0;
        int right=arr.size()-1;
        vector<int>ans;
        int first=-1;
        int last=-1;
        while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==x){
                first=mid;
                right=mid-1;
            }
            else if(arr[mid]<x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
         left=0;
         right=arr.size()-1;
            while(left<=right){
            int mid=left+(right-left)/2;
            if(arr[mid]==x){
                last=mid;
                left=mid+1;
            }
            else if(arr[mid]<x){
                left=mid+1;
            }
            else{
                right=mid-1;
            }
            }
            ans.push_back(first);
            ans.push_back(last);
            
        return ans;
    }
};