struct TreeNode* insertIntoBST(struct TreeNode* root, int val) {
    if (root == NULL) {
        struct TreeNode* newnode =malloc(sizeof(struct TreeNode));
        newnode->val = val;
        newnode->left = NULL;
        newnode->right = NULL;
        return newnode;
    }
    struct TreeNode* curr = root;
    while (1) {
        if (val > curr->val) {
            if (curr->right == NULL) {
                struct TreeNode* newnode =
                    malloc(sizeof(struct TreeNode));
                newnode->val = val;
                newnode->left = NULL;
                newnode->right = NULL;

                curr->right = newnode;
                break;
            }
            curr = curr->right;
        }
        else {
            if (curr->left == NULL) {
                struct TreeNode* newnode =
                    malloc(sizeof(struct TreeNode));
                newnode->val = val;
                newnode->left = NULL;
                newnode->right = NULL;

                curr->left = newnode;
                break;
            }
            curr = curr->left;
        }
    }

    return root;
}
