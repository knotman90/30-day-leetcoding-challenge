/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
  unordered_map<TreeNode *, int> D;

public:
  int depth(TreeNode *root) {
    if (!root)
      return 0;

    if (D.find(root) != D.end())
      return D[root];

    int ans = 0;
    if (root->left)
      ans = 1 + depth(root->left);
    if (root->right)
      ans = std::max(ans, 1 + depth(root->right));

    D[root] = ans;
    return ans;
  }
  int diameterOfBinaryTree(TreeNode *root) {
    if (!root)
      return 0;
    int l, r;
    l = r = 0;
    if (root->left)
      l = 1 + depth(root->left);
    if (root->right)
      r = 1 + depth(root->right);
    return std::max(std::max(l + r, diameterOfBinaryTree(root->left)),
                    diameterOfBinaryTree(root->right));
  }
};
}
;