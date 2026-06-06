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
vector<int> inorder(Node* root){
    vector<int> ino;
    if(root==NULL) return ino;
    Node*curr=root;
    stack<Node*> st;
    while(curr !=NULL || !st.empty()){
         while(curr != NULL){
            st.push(curr);
            curr=curr->left;
         }
         curr = st.top();
         st.pop();
         ino.push_back(curr->data);
         curr=curr->right;

    }
    return ino;
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
    root->right->right=new Node(7);
    vector<int> ans=inorder(root);
    for(int c:ans){
        cout<<c<<" ";
    }
}