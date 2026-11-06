struct TreeNode* deleteNode(struct TreeNode* root, int key) 
{
    if(root == NULL)
        return NULL;
    if(key < root->val)
        root->left = deleteNode(root->left, key);
    else if(key > root->val)
        root->right = deleteNode(root->right, key);
    else
    {
        // No left child
        if(root->left == NULL)
        {
            struct TreeNode* temp = root->right;
            free(root);
            return temp;
        }
        // No right child
        else if(root->right == NULL)
        {
            struct TreeNode* temp = root->left;
            free(root);
            return temp;
        }

        // Two children
        struct TreeNode* temp = root->right;
        while(temp->left != NULL)
            temp = temp->left;
        root->val = temp->val;
        root->right = deleteNode(root->right, temp->val);
    }
    return root;
}