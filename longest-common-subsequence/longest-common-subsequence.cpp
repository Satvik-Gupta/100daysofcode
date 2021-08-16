class Solution {
    int lcs(int i, int j, string &s1, string &s2, vector <vector <int>> &dp)
    {
        if(i == s1.length() || j == s2.length())
            return 0;
        
        else if(dp[i][j]!=-1)
            return dp[i][j];
        
        else if(s1[i]==s2[j])
            return dp[i][j] = 1 + lcs(i+1,j+1,s1,s2,dp);
        
        else
            return dp[i][j] = max(lcs(i+1,j,s1,s2,dp),lcs(i,j+1,s1,s2,dp));
        
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        
        vector <vector <int>> dp(text1.length(),vector <int>(text2.length(),-1));
        return lcs(0,0,text1,text2,dp);
        
    }
};