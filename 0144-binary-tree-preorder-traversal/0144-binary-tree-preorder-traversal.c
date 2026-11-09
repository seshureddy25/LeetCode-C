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
static void preorder(struct TreeNode* root,int *result, int *i)
{
    if(root==NULL)
        return;
    result[(*i)++]=root->val;
    preorder(root->left,result,i);
    preorder(root->right,result,i);
}
int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int *result=malloc(100*sizeof(int));
    int i=0;
    preorder(root,result,&i);
    *returnSize=i;
    return result;
}