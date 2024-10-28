#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};


typedef struct TreeNode TreeNode;

bool isSameTree(TreeNode* p, TreeNode* q){
    if (p == NULL && q == NULL) {
        return true;
    }
    if (p == NULL || q == NULL) {
        return false;
    }
    if (p->val != q->val) {
        return false;
    }
    return isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

int main() {
    TreeNode *p = (TreeNode*)malloc(sizeof(TreeNode));
    p->val = 1;
    p->left = (TreeNode*)malloc(sizeof(TreeNode));
    p->left->val = 2;
    p->left->left = NULL;
    p->left->right = NULL;
    p->right = (TreeNode*)malloc(sizeof(TreeNode));
    p->right->val = 3;
    p->right->left = NULL;
    p->right->right = NULL;

    TreeNode *q = (TreeNode*)malloc(sizeof(TreeNode));
    q->val = 1;
    q->left = (TreeNode*)malloc(sizeof(TreeNode));
    q->left->val = 2;
    q->left->left = NULL;
    q->left->right = NULL;
    q->right = (TreeNode*)malloc(sizeof(TreeNode));
    q->right->val = 3;
    q->right->left = NULL;
    q->right->right = NULL;

    if(isSameTree(p, q)) printf("true\n");
    else printf("false\n");
    return 0;
}