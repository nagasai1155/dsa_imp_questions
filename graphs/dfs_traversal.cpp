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

void dfs_trav(int node,vector<int>adj[],vector<int>&dfs,vector<int>&vis){
    vis[node]=1;
    dfs.push_back(node);
    for(auto it:adj[node]){
        if(!vis[it]){
            dfs_trav(it,adj,dfs,vis);
        }
    }
}

vector<int> dfsTraversal(vector<int> adj[],int v){

    vector<int> dfs;
    int start=0;
    vector<int> vis(v,0);
    dfs_trav(start,adj,dfs,vis);

    return dfs;

}

//dfs iterative version

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> dfsIterative(vector<int> adj[], int v){

    vector<int> vis(v, 0);
    vector<int> dfs;
    stack<int> st;

    for(int start = 0; start < v; start++){   // to cover disconnected graphs
        if(!vis[start]){

            st.push(start);

            while(!st.empty()){
                int node = st.top();
                st.pop();

                if(!vis[node]){          // process when first seen
                    vis[node] = 1;
                    dfs.push_back(node);

                    // push neighbours in REVERSE order
                    // so the smallest/lower index gets processed first
                    for(int i = adj[node].size()-1; i >= 0; i--){
                        int neigh = adj[node][i];
                        if(!vis[neigh]){
                            st.push(neigh);
                        }
                    }
                }
            }
        }
    }
    return dfs;
}

*/

int main(){

    int v=5;
    vector<int> adj[v];

    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,0,4);
    addEdge(adj,3,2);
    addEdge(adj,4,2);

  vector<int> ans=  dfsTraversal(adj,v);
  for(int it:ans){
    cout<<it<<" ";
  }

}