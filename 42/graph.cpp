#include<iostream>
#include<vector>
#include<queue>



using namespace std;

class Graph{
    int V;
    public:
    vector <vector<int>> adj;
        Graph(int V){
            this->V=V;
            adj.resize(V);
        }

        void addEdge(int u,int v){
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        void printGraph(){
            for(int i=0;i<V;i++){
                cout<<"Vertex "<<i<<":";
                for(int x :adj[i]){
                    cout<<x<<" ";
                }
                cout<<endl;
            }
        }
};

void bfs(int start,vector<vector<int>> & adj, int V){
    vector<bool> visited(V,false);
    queue<int> q;

    q.push(start);
    visited[start]=true;

    while(!q.empty()){
        int node=q.front();
        q.pop();
        cout<<node<<" ";

        for(int neighbor: adj[node]){
            if(!visited[neighbor]){
                visited[neighbor]=true;
                q.push(neighbor);
            }
        }
    }

}


void dfs(int node, vector<vector<int>> & adj,vector<bool> & visited){
    visited[node]=true;
    cout<<node<<" ";

    for(int neighbor:adj[node]){
        if(!visited[neighbor]){
            if(!visited[neighbor]){
                dfs(neighbor,adj,visited);
            }
        }
    }

}


int main(){

    Graph g(6);

    g.addEdge(0,1);
    g.addEdge(0,4);
    g.addEdge(1,3);
    g.addEdge(5,3);
    g.addEdge(2,4);
    g.addEdge(1,5);

    g.printGraph();

    bfs(0,g.adj,6);
    
    vector<bool> visited(6 , false);
    dfs(0,g.adj,visited);

    return 0;
}