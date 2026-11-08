/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
void inorder(struct TreeNode *root, int *result, int *i)
{
    if (root == NULL)
        return;
    inorder(root->left, result, i);
    result[(*i)++] = root->val;
    inorder(root->right, result, i);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize)
{
    int *result = malloc(100 * sizeof(int));
    int i = 0;
    inorder(root, result, &i);
    *returnSize = i;
    return result;
}