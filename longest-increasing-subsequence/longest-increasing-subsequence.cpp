class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int dp[nums.size()];
        
        int ans = INT_MIN;
        dp[0] = 1;
        for(int  i = 0 ;i<nums.size();i++)
        {
            dp[i] = 1;            
         for(int j=0;j<i;j++)
            {
             if(nums[j]<nums[i])
                dp[i] = max(1+dp[j],dp[i]);
            }
            ans = max(ans,dp[i]);
        }
       return ans; 
    }
};