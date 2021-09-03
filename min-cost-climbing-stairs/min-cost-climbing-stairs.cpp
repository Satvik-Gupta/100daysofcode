class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        
        int first = cost[0];
        int second = cost[1];
        int min_cost =  min(first,second); ;
        
        for(int i=2 ; i<cost.size() ;i++)
        {
            min_cost = cost[i] + min(first,second);
            first = second;
            second = min_cost;
        }
        
        return min(min_cost,first);
    }
};