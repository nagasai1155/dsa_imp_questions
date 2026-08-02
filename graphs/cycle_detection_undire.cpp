#include<bits/stdc++.h>
using namespace std;

void addEdges(int u,int v, vector<int> adj[]){
    adj[u].push_back(v);
    adj[v].push_back(u);
}
bool bfs(int src,vector<int> adj[],vector<int> & vis){
        vis[src]=1;
        queue<pair<int,int>> q;
        q.push({src,-1});
        while(!q.empty()){
            int node=q.front().first;
            int parent=q.front().second;

            q.pop();
            //traverse adj
            for(auto it:adj[node]){
                if(!vis[it]){
                    vis[it]=1;
                    q.push({it,node});

                }else if( it != parent){
                    return true;
                }
            }
        }
        return false;
}

bool detectCycle(int v, vector<int> adj[]){
    vector<int> vis(v+1,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
           if( bfs(i,adj,vis)==true){
            return true;
           }
        }
    }
    return false;
}

int main(){
    int v=4;
    vector<int> adj[v];
    addEdges(0,1,adj);
    addEdges(1,2,adj);
    addEdges(0,3,adj);
    addEdges(4,2,adj);
    bool res=detectCycle(v,adj);
    if(res) cout<<"cycle";
    else cout<<"no cycle";
}