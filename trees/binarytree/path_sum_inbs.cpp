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
int pathsum(Node* root,int &maxi){
   
    if(root== NULL) return NULL;
    int left=max(0,pathsum(root->left,maxi));
    int right = max(0,pathsum(root->right,maxi));
    int cur=root->data + left+right;
    maxi=max(maxi,cur);
    return root->data + max(left,right);
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
    int maxi=INT_MIN;
    int ans=pathsum(root,maxi);
    cout<<maxi;

}