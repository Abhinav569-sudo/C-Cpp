//Breadth first search
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> g;
vector<bool> v; //for checking which node is visited.
//for directed graph
void add_edge(int a, int b){
    g[a].push_back(b);
}
void bfs(int u){
    queue<int> q;
    //queue processing
    q.push(u);
    //update the visited vector for u node
    v[u] = true;
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout << f << " ";
    //push all neighbours for the u node
        for(auto i=g[f].begin(); i!=g[f].end(); i++){
            if(!v[*i]){
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}

int main(){
    int n, e;
    cin >> n >> e;
    v.assign(n, false);
    g.assign(n, vector<int>());
    int a, b;
    //for assigning values to the vector
    for(int i=0; i<e; i++){
        cin >> a >> b;
        add_edge(a, b);
    }
    //BFS
    for(int i=0; i<n; i++){
        if(!v[i]){
            bfs(i);
        }
    }
    return 0;
}
