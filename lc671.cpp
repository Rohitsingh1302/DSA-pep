#include <iostream>
#include <climits>
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

void dfs(TreeNode* node, long first, long &second) {
    if (!node) return;
    
    if (node->val > first && node->val < second)
        second = node->val;
    
    dfs(node->left, first, second);
    dfs(node->right, first, second);
}

int findSecondMinimumValue(TreeNode* root) {
    if (!root) return -1;
    
    long first = root->val;
    long second = LONG_MAX;
    
    dfs(root, first, second);
    
    return (second == LONG_MAX) ? -1 : second;
}

int main() {
    /*
        Example Tree:
              2
             / \
            2   5
               / \
              5   7
    */
    
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(2);
    root->right = new TreeNode(5);
    root->right->left = new TreeNode(5);
    root->right->right = new TreeNode(7);

    cout << findSecondMinimumValue(root);

    return 0;
}