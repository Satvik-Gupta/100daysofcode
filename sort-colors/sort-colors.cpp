class Solution {
public:
    void swap(int & num1 , int &num2)
    {
        int temp = num1;
        num1 = num2;
        num2 = temp;
    }
    
    void sortColors(vector<int>& nums) 
    {
        int low = 0 , mid = 0 , high = nums.size()-1;
        
        while(mid <= high)
        {
            if(nums[mid] == 0)
            {
               swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if (nums[mid] == 1)
                mid++;
            else
            {
               swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};