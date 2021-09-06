class Solution {
    // optimized, Space: O(N), time: O(N)
public:
    int maxSubArray(vector<int>& nums) {
        int mx=nums[0],sum=nums[0],n=nums.size();
        
        for(int i=1;i<n;i++){
            sum=max(nums[i],sum+nums[i]);
            mx=max(mx,sum);
        }
        
        return mx;
        
    }
};
