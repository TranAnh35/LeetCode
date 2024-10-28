#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

void travel(struct TreeNode* root,int*ret,int*size){
    if(root==NULL)
        return ;
    travel(root->left,ret,size);
    ret[(*size)++]=root->val;
    travel(root->right,ret,size);
}

int* inorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize=0;
    int *ret=malloc(sizeof(int)*100);
    travel(root,ret,returnSize);
        return ret;
}

int main() {
    struct TreeNode root;
    struct TreeNode left;
    struct TreeNode right;
    root.val = 1;
    right.val = 2;
    left.val = 3;
    root.left = NULL;
    root.right = &right;
    right.left = &left;
    right.right = NULL;
    left.left = NULL;
    left.right = NULL;

    int returnSize;
    int *result = inorderTraversal(&root, &returnSize);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", result[i]);
    }
}