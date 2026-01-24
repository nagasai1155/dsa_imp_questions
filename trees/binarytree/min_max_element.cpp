#include<bits/stdc++.h>
using namespace std;
struct Node{
    public:
    int data ;
    Node* left;
    Node* right;

    public:
    Node(int val){
        data=val;
        left=right=NULL;
    }

};
class Solution {
  public:
    int findMax(Node *root) {
        // code here
        if(root == NULL) return INT_MIN;
        int leftmax=findMax(root->left);
        int rightmax=findMax(root->right);
        return max(root->data,max(leftmax,rightmax));
        
    }
    //iterative using bfs level order queue

    int findMax(Node *root) {
    if(root == NULL) return INT_MIN;

    queue<Node*> q;
    q.push(root);

    int maxi = INT_MIN;

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();

        maxi = max(maxi, curr->data);

        if(curr->left)  q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
    return maxi;
}


    int findMin(Node *root) {
        
        // code here
        if(root == NULL) return INT_MAX;
        int leftmin = findMin(root->left);
        int rightmin=findMin(root->right);
        return min(root->data,min(leftmin,rightmin));
    }
//iterative with queue bfs

    int findMin(Node *root) {
    if(root == NULL) return INT_MAX;

    queue<Node*> q;
    q.push(root);

    int mini = INT_MAX;

    while(!q.empty()) {
        Node* curr = q.front();
        q.pop();

        mini = min(mini, curr->data);

        if(curr->left)  q.push(curr->left);
        if(curr->right) q.push(curr->right);
    }
    return mini;
}

};