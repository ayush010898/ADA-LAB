#include<iostream> 
#include <list> 
using namespace std; 
class Graph 
{ 
    int V; 
    list<int> *adj;    
public: 
    Graph(int V); 
    void addEdge(int v, int w);  
    void BFS(int s);   
}; 
  
Graph::Graph(int V) 
{ 
    this->V = V; 
    adj = new list<int>[V]; 
} 
  
void Graph::addEdge(int v, int w) 
{ 
    adj[v].push_back(w);
} 
  
void Graph::BFS(int s) 
{ 
    bool *visited = new bool[V]; 
    for(int i = 0; i < V; i++) 
        visited[i] = false; 
    list<int> queue; 
  
    visited[s] = true; 
    queue.push_back(s); 
 
    list<int>::iterator i; 
  
    while(!queue.empty()) 
    { 
        s = queue.front(); 
        cout << s << " "; 
        queue.pop_front(); 
        for (i = adj[s].begin(); i != adj[s].end(); ++i) 
        { 
            if (!visited[*i]) 
            { 
                visited[*i] = true; 
                queue.push_back(*i); 
            } 
        } 
    } 
} 
 
int main() 
{ 
    Graph g(7); 
    g.addEdge(1, 0); 
    g.addEdge(2, 1); 
    g.addEdge(1, 3); 
    g.addEdge(2, 4); 
    g.addEdge(4, 6); 
    g.addEdge(3, 5);
    g.addEdge(5, 6);
    int vertex;
    cout << "enter vertex to start from \n";
    cin >> vertex;
    cout << "BFS starting from"<< vertex <<"\n"; 
    g.BFS(vertex); 
  
    return 0; 
}
