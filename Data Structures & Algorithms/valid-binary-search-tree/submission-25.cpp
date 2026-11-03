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
    bool isValidBST(TreeNode* root) {
        if (!root) return true;
        if (!root -> left && !root -> right) return true;


        if (root -> left) {
            // find max val in left sub tree
            int max_val = get_max(root -> left);
            cout << root -> val << " MAX: " << max_val << endl;
            // if isvalid is true, set 
            if (max_val >= root -> val) return false;
        }

        if (root -> right) {
            // find min val in left sub tree
            int min_val = get_min(root -> right);
            cout << root -> val << " MIN: " << min_val << endl;
            // if isvalid is true, set 
            if (min_val <= root -> val) return false;
        }

        return min(isValidBST(root -> right), isValidBST(root -> left));
    }

    int get_min(TreeNode * root) {
        if (!root) return 1001;

        int lm = get_min(root -> left);
        int rm = get_min(root -> right);

        return min(root -> val, min(lm, rm));
    }

    int get_max(TreeNode * root) {
        if (!root) return -1001;

        int lm = get_max(root -> left);
        int rm = get_max(root -> right);

        return max(root -> val, max(lm, rm));
    }

};
