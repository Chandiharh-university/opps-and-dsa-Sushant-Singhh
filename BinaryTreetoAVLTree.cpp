#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

// Function to create a new node
Node* newNode(int data) {
    Node* node = new Node();
    node->data = data;
    node->left = node->right = nullptr;
    return node;
}

// Inorder traversal to store elements in sorted order
void storeInorder(Node* root, vector<int>& inorder) {
    if (root == nullptr) return;
    storeInorder(root->left, inorder);
    inorder.push_back(root->data);
    storeInorder(root->right, inorder);
}

// Function to construct AVL Tree from sorted array
Node* sortedArrayToAVL(vector<int>& sortedArr, int start, int end) {
    if (start > end) return nullptr;

    int mid = (start + end) / 2;
    Node* root = newNode(sortedArr[mid]);
    root->left = sortedArrayToAVL(sortedArr, start, mid - 1);
    root->right = sortedArrayToAVL(sortedArr, mid + 1, end);

    return root;
}

// Function to convert a binary tree to AVL
Node* convertToAVL(Node* root) {
    vector<int> inorder;
    storeInorder(root, inorder);
    return sortedArrayToAVL(inorder, 0, inorder.size() - 1);
}

// Function to print tree in level order
void inorderTraversal(Node* root) {
    if (root == nullptr) return;
    inorderTraversal(root->left);
    cout << root->data << " ";
    inorderTraversal(root->right);
}

int main() {
    Node* root = newNode(10);
    root->left = newNode(20);
    root->right = newNode(30);
    root->left->left = newNode(40);
    root->left->right = newNode(50);
    root->right->left = newNode(25);

    cout << "Original Tree (Inorder Traversal): ";
    inorderTraversal(root);

    root = convertToAVL(root);

    cout << "\nAVL Tree (Inorder Traversal): ";
    inorderTraversal(root);

    return 0;
}
