class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> ans;
        int curr_target;
        for(int i=0; i<nums.size()-1 ;i++)
        {
            curr_target = target - nums[i];
            
            int low = i+1;
            int high = nums.size()-1;
            
            while(low <= high)
            {
                int mid = (high - low)/2 + low;
                if(nums[mid] == curr_target)
                {
                    ans.push_back(i+1);
                    ans.push_back(mid+1);
                    return ans;
                }
                else if (nums[mid] < curr_target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
        }
        
        return {-1};
    }
};