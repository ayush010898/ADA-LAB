#include <bits/stdc++.h> 
using namespace std; 
#define V 5   
#define in 9999
  
void floyd (int graph[][V])  
{  
    int dist[V][V], i, j, k;  
    for (i = 0; i < V; i++)  
        for (j = 0; j < V; j++)  
            dist[i][j] = graph[i][j];  
    for (k = 0; k < V; k++)  
    {    
        for (i = 0; i < V; i++)  
        {   
            for (j = 0; j < V; j++)  
            {   
                if (dist[i][k] + dist[k][j] < dist[i][j])  
                    dist[i][j] = dist[i][k] + dist[k][j];  
            }  
        }  
    }   
    cout<<"shortest distances between every pair \n";  
    for (int i = 0; i < V; i++)  
    {  
        for (int j = 0; j < V; j++)  
        {  
            if (dist[i][j] == in)  
                cout<<"INF"<<"     ";  
            else
                cout<<dist[i][j]<<"     ";  
        }  
        cout<<endl;  
    }   
}  
  
int main()  
{  
    int graph[V][V];
    cout<<"enter the matrix of size "<<V<<"\n ";
    for(int i=0;i<V;i++){
	for(int j=0;j<V;j++){
	     cin>>graph[i][j];
	}
    }	 
    floyd(graph);  
    return 0;  
}  
