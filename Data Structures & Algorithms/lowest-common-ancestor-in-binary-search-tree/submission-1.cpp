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
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        // Find path from root to p and q
        vector<TreeNode*> p_path = root_path(root, p->val);
        vector<TreeNode*> q_path = root_path(root, q->val);

        // Search vector for last occurrence of duplicate node
        int min_size = min(p_path.size(), q_path.size());
        for (int i = 0; i < min_size; i++) {  
            if (p_path[i] != q_path[i]) {  
                return p_path[i - 1];  // Last common ancestor is before the first mismatch
            }
        }

        return p_path[min_size - 1];  // If one path is a subset of the other, return the last common node
    }

    vector<TreeNode*> root_path(TreeNode* root, int val) {
        if (!root) return {};  // If root is null, return an empty vector

        if (root->val == val) {
            return {root};  // Return a vector with the found node
        }

        vector<TreeNode*> path;
        if (root->val > val) {
            path = root_path(root->left, val);
        } else {
            path = root_path(root->right, val);
        }

        if (!path.empty()) {
            path.insert(path.begin(), root);  // Prepend the current node to the path
        }
        return path;
    }
};
