//implementation of binary search tree

#include<bits/stdc++.h>
using namespace  std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;
    public:
    Node(int data1){
        data= data1;
        left=right=NULL;
    }
};
class Solution{

    public:
    void preorder(Node* root){

        if(root== NULL){
            return;
        }
        cout<<root->data<<"->";
        preorder(root->left);
        preorder(root->right);
    }

};
//smallest element in bst;

int minValueInBST(Node* root){

    if(root== NULL) return -1;
    while(root->left != NULL){
        root= root->left;
    }
    return root->data;
}

//max value in bst

int maxValueBST(Node* root){
    if(root== NULL) return -1;
    while(root->right != NULL){
        root= root->right;
    }
    return root->data;
}

int main(){

    Node* root= new Node(5);
    root->left= new Node(3);
    root->right= new Node(7);
    root->left->left=new Node(2);
    root->left->right=new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(9);

    Solution s;
   // s.preorder(root);
   int minvalue= minValueInBST(root);
   cout<<"min value: "<<minvalue<<endl;

   int maxvalue=maxValueBST(root);
   cout<<"max value: "<<maxvalue;


}