#include <iostream>
#include <vector>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

Node* build(vector<int>& nums, int left, int right) {
    if(left > right) return NULL;

    int mid = left + (right - left) / 2;

    Node* root = new Node(nums[mid]);
    root->left = build(nums, left, mid - 1);
    root->right = build(nums, mid + 1, right);

    return root;
}

// Inorder print (to verify BST)
void inorder(Node* root) {
    if(!root) return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {
    vector<int> nums = {-10, -3, 0, 5, 9};

    Node* root = build(nums, 0, nums.size()-1);

    cout << "Inorder Traversal: ";
    inorder(root);

    return 0;
}