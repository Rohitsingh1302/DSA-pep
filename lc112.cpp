#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        val = x;
        left = right = NULL;
    }
};

bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;

    if (!root->left && !root->right)
        return targetSum == root->val;

    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}

int main() {
    /*
        Example Tree:
              5
             / \
            4   8
           /   / \
          11  13  4
         /  \
        7    2
    */

    TreeNode* root = new TreeNode(5);
    root->left = new TreeNode(4);
    root->right = new TreeNode(8);
    root->left->left = new TreeNode(11);
    root->left->left->left = new TreeNode(7);
    root->left->left->right = new TreeNode(2);

    int target = 22;

    if (hasPathSum(root, target))
        cout << "True";
    else
        cout << "False";

    return 0;
}