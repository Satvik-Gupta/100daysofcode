class Solution {
public:
    int maxSubArray(vector<int>& arr) {
    
    int max_curr = arr[0]; 
    int max_global = arr[0];
    for(int  i = 1;i < arr.size();i++)
    {
        max_curr = max(arr[i],max_curr + arr[i]);
        max_global = max(max_curr,max_global);
    }
    return max_global;
    }
};