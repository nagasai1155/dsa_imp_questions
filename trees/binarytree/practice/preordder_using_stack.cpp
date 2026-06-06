#include<bits/stdc++.h>
using namespace std;
class Node{

    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }
};
vector<int> preorder(Node* root){
    vector<int> pre;
    if(root==NULL){
        return pre;
    }
    stack<Node*> st;
    st.push(root);
    while(!st.empty()){
        Node* temp=st.top();
        st.pop();

        pre.push_back(temp->data);
        if(temp->right !=NULL){
            st.push(temp->right);
        }
        if(temp->left != NULL){
            st.push(temp->left);
        }

    }
    return pre;
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
    vector<int> ans=preorder(root);
    for(int c:ans){
        cout<<c<<" ";
    }
}