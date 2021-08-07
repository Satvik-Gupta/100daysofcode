class Solution {
public:
    int jump(vector<int>& nums) {
         int dp[nums.size()];
        dp[nums.size()-1] = 0;
        for(int i= nums.size()-2;i>=0;i--)
        {
            dp[i] = (INT_MAX-10);
            for(int j = 1 ;j<=nums[i];j++)
            {
                if(i+j <= nums.size()-1)
                dp[i] = min(dp[i],dp[i+j]+1);
            }
        }
        
            return dp[0];
    }
};