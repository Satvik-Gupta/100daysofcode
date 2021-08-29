class Solution {
public:
    int tri_dp(int n ,vector <int> &dp)
    {
        if(n == 0)
            return dp[n] = 0;
        else if (n == 1 || n == 2)
            return dp[n] = 1;
        else if (dp[n]!=-1)
            return dp[n];
        else
            return dp[n] = tri_dp(n-1,dp) + tri_dp(n-2,dp) + tri_dp(n-3,dp);
    }
    int tribonacci(int n) {
        vector <int> dp( n+1 , -1);
        return  tri_dp(n, dp);
    }
};