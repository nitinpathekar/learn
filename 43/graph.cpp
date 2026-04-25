#include <iostream>
#include <vector>
using namespace std;

int main()
{

    // adj[0].push_back(1);
    // adj[1].push_back(0);
    
    // adj[0].push_back(2);
    // adj[2].push_back(0);
    
    // adj[0].push_back(4);
    // adj[4].push_back(0);
    
    // adj[1].push_back(3);
    // adj[3].push_back(1);
    
    int n, m;
    vector<int> adj[n];
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v;

        cin >> u >> v;
        adj[v].push_back(u);
        adj[u].push_back(v);
    }

    for (int i = 0; i < n; i++)
    {
        cout << i << "->";
        for (auto it : adj[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }

    return 0;
}