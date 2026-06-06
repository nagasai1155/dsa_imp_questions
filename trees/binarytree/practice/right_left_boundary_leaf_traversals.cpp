#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:
    int data;
    Node*left;
    Node*right;
    public:
    Node(int data1){
        data=data1;
        left = right = NULL;
    }
};

class Solution{
    public:
    void preorder(Node* root){
        if(root==NULL) return;
        cout<<root->data<<"->";
        preorder(root->left);
        preorder(root->right);
    }

    void inorder(Node* root){
        if(root==NULL) return;
        inorder(root->left);
        cout<<root->data<<"->";
        inorder(root->right);
    }

    void postorder(Node* root){
        if(root==NULL) return;
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<"->";
    }

    void levelOrder(Node* root){
        if(root==NULL) return;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
           
            Node* node=q.front();
            q.pop();

            cout<<node->data<<"->";
            if(node->left !=NULL){
                q.push(node->left);
            }
            if(node->right != NULL){
                q.push(node->right);
            }
        }
    }
    
};
bool leafNode(Node* node){
    return node->left==NULL && node->right==NULL;
}

vector<int> rightTraversal(Node* root){
        vector<int> rightvalues;
        if(root==NULL) return rightvalues;
        Node* temp = root->right;
        while(temp){
             if(leafNode(temp)==false){
                rightvalues.push_back(temp->data);
             }
             if(temp->right){
                temp = temp->right;
             }else {
                temp= temp->left;
             }
        }
        return rightvalues;

    }

vector<int> leftTraversall(Node* root){
    vector<int> leftTraversal;
    if(root==NULL){
        return leftTraversal;
    }
    Node* leftNode=root->left;
    while(leftNode != NULL){
        if(leafNode(leftNode)==false){
            leftTraversal.push_back(leftNode->data);
        }
        if(leftNode->left){
            leftNode=leftNode->left;
        }else{
            leftNode=leftNode->right;
        }

    }
    return leftTraversal;
}
void leafTraversal(Node* root, vector<int> &leaf){

    if(root == NULL) return;

    if(leafNode(root)){
        leaf.push_back(root->data);
        return;
    }

    leafTraversal(root->left, leaf);
    leafTraversal(root->right, leaf);
}

int main(){
    Solution s;
    Node* root= new Node(1);
    root->left= new Node(2);
    root->right= new Node(3);
    root->left->left= new Node(4);
    root->left->left->left=new Node(66);
    root->left->right= new Node(5);
    root->right->left=new Node(6);
    root->right->left->left=new Node(36);
    root->right->right=new Node(7);
    root->right->right->right=new Node(17);

   vector<int> ans;

    leafTraversal(root, ans);

    for(int x : ans){
        cout<<x<<" ";
    }
    
    
}