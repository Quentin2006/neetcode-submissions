/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<vector<int>> result;
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return {};

        levelOrder(root, 0); 

        return result;
    }

    void levelOrder(TreeNode * root, int depth) {
        if (!root) return;

        // makes a new depth index
        if (result.size() == depth) 
            result.push_back(vector<int>());

        result[depth].push_back(root -> val);

        levelOrder(root -> left, depth + 1);
        levelOrder(root -> right, depth + 1);
    }
};
