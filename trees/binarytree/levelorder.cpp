#include<bits/stdc++.h>
using namespace std;

struct Node{
    public:

    int data;
    Node* left;
    Node* right;

    public:
    Node(int val){
        data = val;
        left = right = NULL;
    }
};

vector<vector<int>> levelorder(Node* root){
    queue<Node*> q;
    q.push(root);
    vector<vector<int>> ans;
    while(!q.empty()){
        vector<int> level;
        int n= q.size();
        for(int i=0;i<n;i++){
            Node* newNode=q.front();
            q.pop();
            if(newNode->left != NULL) q.push(newNode->left);
            if(newNode->right != NULL) q.push(newNode->right);
            level.push_back(newNode->data);
        }
        ans.push_back(level);
    }
    return ans;
}
int main(){

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left= new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right ->right= new Node(7);
   vector<vector<int>> ans1= levelorder(root);
   for(int i=0;i<ans1.size();i++){
    for(int j=0;j<ans1[i].size();j++){
        cout<<ans1[i][j]<<" ";

    }
    cout<<endl;
   }


}