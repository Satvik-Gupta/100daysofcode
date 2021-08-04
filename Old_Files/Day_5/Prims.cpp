#include<bits/stdc++.h>
using namespace std;
#define v 5
int large=1000000;
int minkey(int key[], int set[])  
{  
    int min = large;
	int min_index;  
    for (int i = 0; (i < v) ; i++)  
        {
		if (set[i] == 0 && key[i] < min)  
            {
			min = key[i];
			min_index = i; 
			}
    	}
    return min_index;  
}  


void print(int parent[], int graph[v][v])  
{  
    cout<<"    Edge    Weight\n";  
    for (int i = 1; i < v; i++)  
        cout<<parent[i]<<"  :  "<<i<<"      "<<graph[i][parent[i]]<<" \n";  
}

void prims(int graph[v][v])
{
	int parent[v],key[v],set[v];
	for(int i=0;i<v;i++)
	{
		key[i]=large;
		set[i]=0;
	}	
    key[0] = 0;  
    parent[0] = -1; 
    for (int i = 0; i < v - 1; i++) 
    {  
        int u = minkey(key, set);  
        set[u] = 1;      
        for (int j = 0; j < v; j++)  
            {
			if (graph[u][j] && set[j] == 0 && graph[u][j] < key[j])  
                {
                	parent[j] = u;
					key[j] = graph[u][j];  
				}
				
        	}
    }
	print(parent, graph);
}


int main()
{
	int graph[v][v]={{0,2,3,0,0},{2,0,0,5,7},{3,0,0,4,0},{0,5,4,0,6},{0,7,0,6,0}};
	prims(graph);	
} 

