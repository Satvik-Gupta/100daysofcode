class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        vector <int> befor_zeroes(nums.size());
        int count = 0;
        
        for(int i=0 ; i<nums.size() ; i++)
        {
            if(nums[i] == 0)
                count++;
            else
                befor_zeroes[i] = count;
        }
        
        for(int i=0 ; i<nums.size() ; i++)
            if(nums[i] != 0)
                nums[i - befor_zeroes[i]]  = nums[i];
        
        for(int i = nums.size()-1 ; i>nums.size() -count -1 ;i--)
            nums[i] = 0;
    }
};