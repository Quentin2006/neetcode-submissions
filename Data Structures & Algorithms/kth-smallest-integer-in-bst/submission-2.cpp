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

/*
add all to array in increasing order,
return array[k-1]
*/

class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        vector<int> res;
        fill(root, res);

        return res[k-1];
    }

    void fill(TreeNode* root, vector<int> & res) {
        if (!root) return;

        fill(root -> left, res);
        res.push_back(root -> val);
        fill(root -> right, res);

        return;
    }
};
