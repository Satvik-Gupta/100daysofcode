class Solution {
public:
    int fibo_dp(int n ,vector <int> &dp)
    {
        if(n == 0)
         return 0;
        else if (n == 1)
            return 1;
        else if(dp[n]!= 0)
            return dp[n];
        else
            return dp[n] = fibo_dp(n-1 ,dp)+fibo_dp(n-2 ,dp);
    }
    
    int fib(int n) {
        vector <int> dp(n+1 ,0);
        return fibo_dp(n ,dp);
    }
};