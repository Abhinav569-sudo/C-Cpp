#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj, int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}
void dfs_check(int u, vector<int> adj[], vector<bool> &visited){
    visited[u] = true;
    cout << u << " ";
    for(int i=0; i<adj[u].size(); i++){
        if(visited[adj[u][i]] == false){
            dfs_check(adj[u][i], adj, visited);
        }
    }
}
void dfs(vector<int> adj[], int v){
    vector<bool> visited(v, false);
    for(int i=0; i<v; i++){
        if(visited[i] == false){
            dfs_check(i, adj, visited);
        }
    }
}

int main(){
    int v=5;
    vector<int> adj[v];
    add_edge(adj, 0, 1);
    add_edge(adj, 0, 4);
    add_edge(adj, 1, 4);
    add_edge(adj, 1, 3);
    add_edge(adj, 1, 2);
    add_edge(adj, 3, 4);
    add_edge(adj, 2, 3);
    dfs(adj, v);
    return 0;
}
