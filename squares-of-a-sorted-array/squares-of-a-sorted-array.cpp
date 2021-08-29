class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        
        vector <int> ans;
        int  i = 0;
        int  j = nums.size()-1;
        
        for(int k = 0 ; k<nums.size();k++)
        {
            if(abs(nums[i]) > nums[j])
            {
                ans.push_back(nums[i]*nums[i]);
                i++;
            }
            else
            {
                ans.push_back(nums[j]*nums[j]);
                j--;
            }
        }
        
        reverse(ans.begin(),ans.end());
        return ans;
    }
};