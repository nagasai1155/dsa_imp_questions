#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data1){
        data = data1;
        left= right = NULL;
    }

};
//finding max and min element
int levelorder(Node* root){

    if(root==NULL) return INT_MIN;
    int maxi=INT_MIN;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();

        maxi=max(temp->data,maxi);
        if(temp->left != NULL){
            q.push(temp->left);
        }
        if(temp->right != NULL){
            q.push(temp->right);
        }
    }
    return maxi;

}

//min element
int levelorderMin(Node* root){
    if(root== NULL) return INT_MAX;
    int mini=INT_MAX;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        mini=min(mini,temp->data);
        if(temp->left !=NULL){
            q.push(temp->left);
        }
        if(temp->right !=NULL){
            q.push(temp->right);
        }
        

    }
    return mini;
}
int main(){
    Node* root=new Node(14);
    root->left=new Node(24);
    root->right= new Node(3);
    root->left->left= new Node(42);
    root->left->right= new Node(5);
    root->right->left=new Node(6);
    root->right->right=new Node(7);
   int maxx= levelorderMin(root);
   cout<<"mini element:"<<maxx;
}