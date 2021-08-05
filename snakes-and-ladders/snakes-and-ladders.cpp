class Solution {
public:
    int min_cost_bfs(vector<vector<int>> & adj ,int n)
    {
        queue <int> q;
        vector <bool> visited(n*n + 1,false);
        vector <int> dist(n*n+1,-1);
        
        q.push(1);
        visited[1] = true;
        dist[1] = 0;
        
        while(!q.empty())
        {
            int f = q.front();
            q.pop();
            
            for(int i=0;i<adj[f].size();i++)
            {
                if(!visited[adj[f][i]])
                {
                    q.push(adj[f][i]);
                    visited[adj[f][i]] = true;
                    dist[adj[f][i]] = dist[f]+1;
                }
            }
        }
        
        return dist[n*n];
    }
    
    int snakesAndLadders(vector<vector<int>>& board) {
        
        int n = board.size();
        int curr = 1;
        int j = 0 , k = 0;
        unordered_map <int,int> jump;
        vector<vector<int>> adj(n*n + 1);
        
        for(int i = n-1 ; i>-1 ; i--)
        {
            if(k%2 == 0)
            for(j =0;j<n;j++)
            {
                jump.insert(make_pair(curr,board[i][j]));
                            curr++;
            }
                            
            else                
            for(j=n-1 ; j>-1; j--)
            {
               jump.insert(make_pair(curr,board[i][j]));
                            curr++;                  
            }
            k++;
        }
        
        for(int  i = 1 ;i <=n*n; i++)
        {
            for(int j = 1 ; j<= 6 ;j++)
            {
                if((i+j)<=n*n)
                {
                    if(jump[i+j]==-1)
                    adj[i].push_back(i+j);
                    
                    else
                    adj[i].push_back(jump[i+j]);
                }
            }
        }
        
       int ans = min_cost_bfs(adj ,n);
       return ans;        
        
    }
};