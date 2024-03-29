class Solution {
public:
    int maxHeight(vector<vector<int>>& cuboids) {
        
        for (int  i=0; i<cuboids.size();i++)
            sort(cuboids[i].begin(),cuboids[i].end());
        
	cuboids.push_back({0,0,0});
        sort(cuboids.begin(),cuboids.end());
       
        vector <int> dp(cuboids.size());
        int ans = 0;
  
        for(int i = 1; i< cuboids.size();i++)
        {
            for(int j = 0 ;j<i ;j++)
            {
                if((cuboids[j][0]<=cuboids[i][0])&&(cuboids[j][1]<=cuboids[i][1])&&(cuboids[j][2]<=cuboids[i][2]))
                {
                    dp[i]=max(dp[i],dp[j]+cuboids[i][2]);
                     ans = max(ans,dp[i]);
                }
            } 
        }
        return ans;
    }
};