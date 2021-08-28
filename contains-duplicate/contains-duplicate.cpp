class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        unordered_set <int> s1;
        
        for(int i = 0 ;i< nums.size();i++)
            s1.insert(nums[i]);
        
        if(s1.size() == nums.size())
            return false;
        else
            return true;
    }
};