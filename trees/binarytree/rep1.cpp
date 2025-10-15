// #include <bits/stdc++.h>
// using namespace std;

// struct Node {
//     int data;
//     Node* left;
//     Node* right;
//     Node(int data1) {
//         data = data1;
//         left = right = NULL;
//     }
// };

// // Print tree with arrows
// void printTree(Node* root, string indent = "", bool isLeft = false) {
//     if (root == NULL) return;

//     // Print right child first
//     if (root->right) {
//         printTree(root->right, indent + (isLeft ? "│   " : "    "), false);
//     }

//     // Print current node
//     cout << indent;
//     if (isLeft)
//         cout << "└──> ";
//     else
//         cout << "┌──> ";
//     cout << root->data << endl;

//     // Print left child
//     if (root->left) {
//         printTree(root->left, indent + (isLeft ? "    " : "│   "), true);
//     }
// }

// int main() {
//     Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->left->left = new Node(4);
//     root->left->right = new Node(5);
//     root->right->left = new Node(6);
//     root->right->right = new Node(7);

//     cout << "Tree Structure with Arrows:\n";
//     printTree(root);
// }
