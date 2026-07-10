class Solution {
  public:
    bool hasTripletSum(vector<int> &arr, int target) {
        // Code Here
        sort(arr.begin(), arr.end());
        int n=arr.size();
        for(int i=0;i<n-2;i++){
            int l=i+1,r=n-1;
          int  newgt=target-arr[i];
            while(l<r){
               int sum=arr[l]+arr[r];
                if(sum==newgt){
                    return true;
                }
                else if(sum<newgt){
                    l++;
                }
                else{
                    r--;
                }
            }
        }
          return false;  
    }
};