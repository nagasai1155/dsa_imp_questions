#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node*left;
    Node*right;
    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
int depthofbs(Node* root){
    if(root==NULL) return 0;
    int depth=0;
    //using bfs traversal
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        depth++;
        while(size--){
            Node* temp=q.front();
            q.pop();
            if(temp->left != NULL){
                q.push(temp->left);
            }
            if(temp->right != NULL){
                q.push(temp->right);
            }
        }
    }
    return depth;
}

int main(){
     Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->left->left=new Node(66);
    root->left->right= new Node(5);
    root->right->left=new Node(6);
    root->right->left->left=new Node(36);
    root->right->left->left->left=new Node(336);
    root->right->right=new Node(7);
    int ans=depthofbs(root);
    cout<<ans;

}