#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);
    if(val <root->data){
        root->left=insert(root->left,val);

    }else {
        root->right=insert(root->right,val);
    }
    return root;
}

//floor largest value that should <=ke
int findFloor(Node* root,int key){
    if(root==NULL) return -1;
    int floor=-1;
    while(root !=NULL){
        if(root->data == key){
             floor=root->data;
             return floor;
        }else if(key < root->data){
            root=root->left;
        }else{
            floor=root->data;
            root=root->right;
        }
    }
    return floor;
}
//ceil measn smallest value >=key
int findCeil(Node* root,int key){
    if(root==NULL) return -1;
    int ceil=-1;
    while(root != NULL){
        if(root->data==key){
            ceil=root->data;
            return ceil;
        }else if(key > root->data){
            root=root->right;
        }else{
            ceil=root->data;
            root=root->left;
        }
    }
    return ceil;
}

int main(){
  
    int n;
    cin>>n;
    Node* root=NULL;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        root=insert(root,x);
    }
    int ke=4;
   int ans= findCeil(root,ke);
   cout<<ans;
}