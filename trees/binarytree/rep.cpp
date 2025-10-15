#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int data1) {
        data = data1;
        left = right = NULL;
    }
};

// Recursive function to print tree
void printTree(Node* root, int space = 0, int height = 10) {
    if (root == NULL) return;

    // Increase distance between levels
    space += height;

    // Print right child first
    printTree(root->right, space);

    // Print current node after spaces
    cout << endl;
    for (int i = height; i < space; i++)
        cout << " ";
    cout << root->data << "\n";

    // Print left child
    printTree(root->left, space);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "Tree Structure:\n";
    printTree(root);
}
