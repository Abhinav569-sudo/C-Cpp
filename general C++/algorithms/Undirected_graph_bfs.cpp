#include<bits/stdc++.h>
using namespace std;

void add_edge(vector<int> adj, int a, int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
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
    return 0;
}
