#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* search(Node* root, int key) {
    if (root == nullptr || root->data == key)
        return root;

    if (root->data < key)
        return search(root->right, key);

    return search(root->left, key);
}

Node* findMin(Node* node) {
    Node* current = node;
    while (current && current->left != nullptr)
        current = current->left;
    return current;
}

Node* findMax(Node* node) {
    Node* current = node;
    while (current && current->right != nullptr)
        current = current->right;
    return current;
}

int main() {
    Node* root = new Node();
    root->data = 10;
    root->left = new Node();
    root->left->data = 5;
    root->right = new Node();
    root->right->data = 15;

    cout << "Searching for 5: " << (search(root, 5) != nullptr ? "Found" : "Not Found") << endl;
    cout << "Minimum element: " << findMin(root)->data << endl;
    cout << "Maximum element: " << findMax(root)->data << endl;

    return 0;
}
