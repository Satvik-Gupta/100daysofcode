class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        k = k % nums.size();
        int pivot = nums.size() - k;
        
        reverse(nums.begin(), nums.begin() + pivot);
        reverse(nums.begin() + pivot, nums.end());
        reverse(nums.begin(), nums.end());
    }
};