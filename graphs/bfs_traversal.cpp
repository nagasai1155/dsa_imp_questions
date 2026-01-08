#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int>adj[],int a,int b){
    adj[a].push_back(b);
    adj[b].push_back(a);
}

void printGraph(vector<int>adj[],int v){
    for(int i=0;i<v;i++){
        cout<<i<<":";

        for(int x:adj[i]){
            cout<<"->"<<x;
        }
        cout<<endl;
    }
}

vector<int> bfs_traversal(vector<int> adj[],int v){
    vector<int> vis(v,0);
    vis[0]=1;
    queue<int> q;
    q.push(0);
vector<int> bfs;
    while(!q.empty()){
        int node=q.front();
        q.pop();
        bfs.push_back(node);

       for(auto it:adj[node]){
        if(!vis[it]){
            vis[it]=1;
            q.push(it);
        }
       }
    }
    return bfs;
}

//this bfs will traverse on all the disconnected graphs tooo
/*   vector<int> bfs_traversal(vector<int> adj[], int v){

    vector<int> vis(v, 0);
    vector<int> bfs;

    for(int start = 0; start < v; start++){

        if(!vis[start]){

            vis[start] = 1;
            queue<int> q;
            q.push(start);

            while(!q.empty()){
                int node = q.front();
                q.pop();
                bfs.push_back(node);

                for(int it: adj[node]){
                    if(!vis[it]){
                        vis[it] = 1;
                        q.push(it);
                    }
                }
            }
        }
    }
    return bfs;
}*/


int main(){

    int v=5;
    vector<int> adj[v];

    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,3,2);
    addEdge(adj,4,2);

    vector<int> ans=bfs_traversal(adj,v);
    for(auto it:ans){
        cout<<it<<" ";
    }

}