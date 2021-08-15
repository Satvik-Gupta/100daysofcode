class Solution {
public:
    int rob(vector<int>& nums) {
        
        int dp[nums.size()];
        dp[0] = nums[0];
        
        if(nums.size()==1)
            return dp[0];
        
        dp[1] = max(nums[0],nums[1]);
        int max_val = dp[1]; 
        
        for(int i = 2; i< nums.size() ;i++)
        {
            dp[i] = max(dp[i-1], nums[i]+dp[i-2]);
            max_val =  max(max_val , dp[i]);
        }
        
        return max_val;
    }
};