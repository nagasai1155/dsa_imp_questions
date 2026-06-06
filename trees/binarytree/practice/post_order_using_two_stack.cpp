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
vector<int> postorder(Node* root){
    vector<int> post;
    if(root==NULL) return post;
    stack<Node*> st1,st2;
    st1.push(root);
    while(!st1.empty()){
        Node* temp=st1.top();
        st1.pop();
        st2.push(temp);

        if(temp->left !=NULL){
            st1.push(temp->left);
        }
        if(temp->right != NULL){
            st1.push(temp->right);
        }
    }
    while(!st2.empty()){
        post.push_back(st2.top()->data);
        st2.pop();
    }
    return post;
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
    vector<int> ans=postorder(root);
    for(int c:ans){
        cout<<c<<" ";
    }
}