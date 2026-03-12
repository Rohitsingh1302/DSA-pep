// LeetCode 1302 - Deepest Leaves Sum
// Git: git commit -m "Solved LeetCode 1302 - BFS Level Order"

#include <iostream>
#include <queue>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x){
        val = x;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        queue<TreeNode*> q;
        q.push(root);
        int sum = 0;

        while(!q.empty()){
            int n = q.size();
            sum = 0;

            while(n--){
                TreeNode* node = q.front();
                q.pop();
                sum += node->val;

                if(node->left) q.push(node->left);
                if(node->right) q.push(node->right);
            }
        }
        return sum;
    }
};

int main(){
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->right->right = new TreeNode(5);
    Solution obj;
    cout << obj.deepestLeavesSum(root);
    return 0;
}