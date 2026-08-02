#include<bits/stdc++.h>
using namespace std;
//adjacency list 
void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
    adj[v].push_back(u);
}

void printGraph(vector<int> adj[],int v){
    for(int i=0;i<v;i++){
  cout<<i<<":";
        for(int num:adj[i]){
            cout<<"->"<<num<<"";
        }
        cout<<endl;
    }
}


int main(){
    int v=5;
    vector<int> adj[v+1];
    addEdge(adj,0,1);
    addEdge(adj,0,2);
    addEdge(adj,1,3);
    addEdge(adj,2,4);
    addEdge(adj,4,5);
    addEdge(adj,3,5);
    printGraph(adj,v);
}