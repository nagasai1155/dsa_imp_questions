#include<bits/stdc++.h>
using namespace std;

void addEdge(int a,int b,int v,vector<int> adj[]){

    adj[a].push_back(b);
    adj[b].push_back(a);
}
//bfs traversAL
bool isDetect(int src,vector<int> & vis,vector<int> adj[]){
    vis[src]=1;
    // {node,parent} parent:where it come from
    queue<pair<int,int>> q;
    q.push({src,-1});

    while(!q.empty()){
        int node=q.front().first;
        int parent=q.front().second;

        q.pop();

        for(auto adjNode:adj[node]){
            if(!vis[adjNode]){
                vis[adjNode]=1;
                q.push({adjNode,node});
            }else if(parent != adjNode){
                return true;
            }

        }
    }
    return false;
}
bool detectCycle(int v,vector<int> adj[]){
     vector<int> vis(v,0);
    for(int i=0;i<v;i++){
        if(!vis[i]){
            if(isDetect(i,vis,adj)) return true;
        }
    }
    return false;
}



//using dfs
bool dfs(int node,int parent,vector<int>& vis,vector<int> adj[]){
    vis[node]=1;
    for(auto adjNode:adj[node]){
        if(!vis[adjNode]){
            if(dfs(adjNode,node,vis,adj)==true) return true;
        }
        else if(adjNode != parent) return true;
    }
    return false;
}

bool detcy(int v,vector<int> adj[]){
    vector<int> vis(v,0);//0 based indexing

    for(int i=0;i<v;i++){
        if(!vis[i]){
           if( dfs(i,-1,vis,adj)==true){
            return true;
           }
        }
    }
    return false;
}

int main(){
    int v=8;
    vector<int> adj[v];

    addEdge(0, 1, v,adj);
    addEdge(1, 2, v,adj);
    addEdge(2, 3,v, adj);
    addEdge(3, 0,v, adj);

   bool ans= detcy(v,adj);
   if(ans==true)cout<<"cycle is there"<<endl;
   else cout<<"no cycle"<<endl;
}