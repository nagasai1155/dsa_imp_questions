#include<bits/stdc++.h>
using namespace std;

void printGraph(vector<int> adj[],int m){
    
}


int main(){

    //adjacency list ->undirected graph

    //tc:0(n) sc:->undirected graph o(2*E) and directed graph o(E);

    int n,m;
    cin>>n>>m;

    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    return 0;
}