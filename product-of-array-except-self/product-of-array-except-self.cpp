class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        if(nums.size()==0)
            return {};
        
        vector <int> right_to_left(nums.size(),1) , left_to_right(nums.size(),1), ans;
        
        for(int i = 1 ; i < nums.size() ;i++ )
            left_to_right[i] = left_to_right[i-1]*nums[i-1]; 
        
        for(int i = nums.size()-2 ; i > -1 ;i-- )
            right_to_left[i] = right_to_left[i+1]*nums[i+1];
        
        for(int i = 0; i<nums.size() ; i++)
            ans.push_back(right_to_left[i]*left_to_right[i]);
        
        return ans;
        
    }
};