
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        while (root != NULL) {
            if (root->val == val) 
            {
                return root;
            }
            else if (val > root->val)
            {
                root = root->right;
            }
            else 
            {
                root = root->left;
            }
        }

        return NULL;
    }
};
