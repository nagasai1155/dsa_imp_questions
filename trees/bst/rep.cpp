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

//Ceiling of a value refers to the value of the smallest 
//node in the Binary Search Tree that is greater than or 
//equal to the given key. If the ceiling node does not exist, 
//return nullptr.
int ceilInBST(Node* root,int k){
    
    int ceil=-1;
    if(root== NULL) return -1;

    while(root){

        if(root->data== k){
                ceil=root->data;
                return ceil;
        }else if(k > root->data){
            root= root->right;
        }else{
             ceil= root->data;
             root= root->left;
        }

    }
    return ceil;

}

int floorInBST(Node* root,int k){
    int floor=-1;
    if(root== NULL) return -1;
    while(root){

        if(root->data==k){
            floor=root->data;
             return floor;
        }else if(k<root->data){
            root=root->left;
        }else{
            floor=root->data;
            root=root->right;
        }
    }
    return floor;
}

//inorder successor  :smallest value >key
Node* inorderSucc(Node* root, Node* key){
    Node* succ = NULL;
    while(root != NULL){
        if(key->data < root->data){
            succ= root;
            root=root->left;
        }else{
            root= root->right;
        }
    }
    return succ;
}
//largest value < key
Node* inorderPrede(Node* root,Node* key){

    if(root== NULL) return NULL;
    Node* pred= root;
    while(root != NULL){
        if(key->data > root->data){
            pred=root;
            root= root->right;
        }else{
          
            root=root->left;
        }
    }
    return pred;
}


int main(){

    Node* root= new Node(5);
    root->left= new Node(3);
    root->right= new Node(7);
    root->left->left=new Node(1);
    root->left->right=new Node(4);
    root->right->left= new Node(6);
    root->right->right= new Node(9);

    Node* key= root->right->left;

   
Node* r= inorderSucc(root,key);
cout<<r->data<<": inorder succ"<<endl;

Node* p = inorderPrede(root,key);
cout<<p->data<<": precedor "<<endl;






   // s.preorder(root);
//    int minvalue= minValueInBST(root);
//    cout<<"min value: "<<minvalue<<endl;

//    int maxvalue=maxValueBST(root);
//    cout<<"max value: "<<maxvalue;
    //    int res= ceilInBST(root,2);
    //    cout<<"ceil in bst: "<<res<<endl;

    //    int res1=floorInBST(root,7);
    //    cout<<"floor in bst: "<<res1<<endl;

 


}