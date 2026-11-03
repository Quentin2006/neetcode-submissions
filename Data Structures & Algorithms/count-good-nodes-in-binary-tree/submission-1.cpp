/*
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

// 


class Solution {
public:
    int goodNodes(TreeNode* root) {
        return preorder(root, root -> val);
    }

    int preorder(TreeNode * root, int max_val) {
        if (!root) return 0;

        int good_node = 0;

        if (max_val <= root -> val) ++good_node;
        max_val = max(max_val, root -> val);

        good_node += preorder(root -> left, max_val);
        good_node += preorder(root -> right, max_val);

        return good_node;
    }

};
