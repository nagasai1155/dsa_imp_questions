#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node* left;
    Node* right;

    public:
    Node(int data1){
        data= data1;
        left=right= NULL;
    }
};
class Naga{
    public:

    void preorder(Node* root){
        if(root== NULL) return;
        cout<<root->data<<"->";
        preorder(root->left);
        preorder(root->right);
    }

    //right traversal of binary tree bottom up
    bool isLeaf(Node* root){
        return root->left == NULL && root->right== NULL;
    }

    void rightTraversal(Node* root){

        if(root== NULL) return;
        vector<int> rightvalues;
        Node* temp= root->right;
        
        while(temp){
            if(!isLeaf(temp)){
                rightvalues.push_back(temp->data);
            }
                if(temp->right){
                    temp = temp->right;
                }else{
                    temp= temp->left;
                }

            
        }
        for(int i=rightvalues.size()-1;i>=0;i--){
            cout<<rightvalues[i]<<"->";
        }
    }



    //left traversal

    void leftTraversal(Node* root){
        if(root== NULL) return;
        vector<int> leftN;
        Node* temp = root->left;
        while(temp){
            if(!isLeaf(temp)){
                leftN.push_back(temp->data);
            }
            if(temp->left){
                temp = temp->left;
            }else{
                temp= temp->right;
            }
        }
        for(int i=0;i<leftN.size();i++){
            cout<<leftN[i]<<"->";
        }
    }


    //leaf traversal

    void leafTraversal(Node* root){

        if(root== NULL) return;

        if(isLeaf(root)){
            cout<<root->data<<"->";
        }
        
        leafTraversal(root->left);
         leafTraversal(root->right);
       

    }

    //full boundary tarversal anti clock wise
    void fullBoundaryTraversal(Node* root){
        if(root== NULL) return;

        if(!isLeaf(root)){
            cout<<root->data<<"->";
        }
        leftTraversal(root);
        leafTraversal(root);
        rightTraversal(root);
    }


};




int main()
{
         
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->left->left= new Node(9);
    root->left->right= new Node(5);
    root->right->left= new Node(6);
    root->right->right= new Node(7);
    root->right->right->right= new Node(8);
    
    Naga c;
    c.fullBoundaryTraversal(root);


}