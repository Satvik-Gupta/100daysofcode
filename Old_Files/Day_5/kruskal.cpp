#include <bits/stdc++.h> 
using namespace std; 
#define V 5 
int parent[V]; 
int large=1000000;
int find(int i) 
{ 
    while (parent[i] != i) 
        i = parent[i]; 
    return i; 
} 
void union1(int i, int j) 
{ 
    int a = find(i); 
    int b = find(j); 
    parent[a] = b; 
} 

void kruskal(int cost[][V]) 
{ 
    int mincost = 0;
    for (int i = 0; i < V; i++) 
        parent[i] = i; 
    int edgecount = 0; 
    while (edgecount < V - 1) { 
        int min = large, a = -1, b = -1; 
        for (int i = 0; i < V; i++) { 
            for (int j = 0; j < V; j++) { 
                if (find(i) != find(j) && cost[i][j] < min) { 
                    min = cost[i][j]; 
                    a = i; 
                    b = j; 
                } 
            } 
        } 
  
        union1(a, b); 
        cout<<"Edge "<<edgecount++<<"   "<<a<<","<< b<<"  cost: "<<min<<"\n"; 
        mincost += min; 
    } 
    cout<<"\n Minimum cost= "<< mincost<<"\n"; 
} 
  
int main() 
{ 
    int cost[][V] = {{large,2,3,large,large},{2,large,large,5,7},{3,large,large,4,large},
						{large,5,4,large,6},{large,7,large,6,large}};
    kruskal(cost); 
    return 0; 
} 
