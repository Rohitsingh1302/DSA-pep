#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    
    TreeNode(int x) {
        val = x;
        left = NULL;
        right = NULL;
    }
};

int dfs(TreeNode* node, int current) {
    if (!node) return 0;

    current = (current << 1) | node->val;

    if (!node->left && !node->right)
        return current;

    return dfs(node->left, current) +
           dfs(node->right, current);
}

int sumRootToLeaf(TreeNode* root) {
    return dfs(root, 0);
}

int main() {
    /*
        Example Tree:
              1
             / \
            0   1
           / \   \
          0   1   1
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(0);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(1);
    root->right->right = new TreeNode(1);

    cout << sumRootToLeaf(root);

    return 0;
}