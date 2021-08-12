class Solution {
public:
    int maximalNetworkRank(int n, vector<vector<int>>& roads) {
      
        vector <vector <int>> graph_1(n);
        
        for(int i = 0 ; i<roads.size() ;i++)
        {
            graph_1[roads[i][0]].push_back(roads[i][1]);
            graph_1[roads[i][1]].push_back(roads[i][0]);
        }
        
        int maxR= 0;
        int currR ;
        for(int i = 0; i < n; i++) 
        {
            for(int j = 0; j < n; j++) 
            {
                if(i != j) 
                {
                    if(find(graph_1[j].begin(),graph_1[j].end(),i) != graph_1[j].end())
                        currR = graph_1[i].size() + graph_1[j].size() - 1;
        
                    else  
                        currR = graph_1[i].size() + graph_1[j].size();
                    
                    maxR = max(currR,maxR);
                }
            }
        }
        return maxR;
    }
};