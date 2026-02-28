#include <iostream>
#include <climits>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool validate(TreeNode* root, long min, long max) {
        if(!root) return true;
        if(root->val <= min || root->val >= max) return false;
        return validate(root->left, min, root->val) &&
               validate(root->right, root->val, max);
    }

    bool isValidBST(TreeNode* root) {
        return validate(root, LONG_MIN, LONG_MAX);
    }
};

int main() {
    // Creating sample BST: 2 1 3
    TreeNode* root = new TreeNode(2);
    root->left = new TreeNode(1);
    root->right = new TreeNode(3);

    Solution obj;

    if(obj.isValidBST(root))
        cout << "Valid BST\n";
    else
        cout << "Not a Valid BST\n";

    return 0;
}