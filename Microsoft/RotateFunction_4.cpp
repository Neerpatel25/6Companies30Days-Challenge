//396. Rotate Function


class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n = nums.size();
        long sum=0;
        long org=0;
        for(int i=0;i<n;i++){
            sum=sum+nums[i];
            org=org+i*nums[i];

        }
        long maxi=INT_MIN;
      for(int i=n-1;i>=0;i--)
        {
            org = org + sum -(nums[i]*n);
            maxi = max(org,maxi);
        }
        return maxi;
    }
};