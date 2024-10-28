#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

typedef struct TreeNode TreeNode;

bool check(TreeNode* a, TreeNode *b){
    if (a == NULL && b == NULL) return true;
    if (a == NULL || b == NULL) return false;
    if (a->val != b->val) return false;
    return check(a->left, b->right) && check(a->right, b->left);
}

bool isSymmetric(struct TreeNode* root){
    if(root == NULL) return true;
    return check(root->left, root->right);
}

int main() {
    TreeNode *root = (TreeNode*)malloc(sizeof(TreeNode));
    root->val = 1;
    root->left = (TreeNode*)malloc(sizeof(TreeNode));
    root->left->val = 2;
    root->left->left = (TreeNode*)malloc(sizeof(TreeNode));
    root->left->left->val = 3;
    root->left->left->left = NULL;
    root->left->left->right = NULL;
    root->left->right = (TreeNode*)malloc(sizeof(TreeNode));
    root->left->right->val = 4;
    root->left->right->left = NULL;
    root->left->right->right = NULL;
    root->right = (TreeNode*)malloc(sizeof(TreeNode));
    root->right->val = 2;
    root->right->left = (TreeNode*)malloc(sizeof(TreeNode));
    root->right->left->val = 4;
    root->right->left->left = NULL;
    root->right->left->right = NULL;
    root->right->right = (TreeNode*)malloc(sizeof(TreeNode));
    root->right->right->val = 3;
    root->right->right->left = NULL;
    root->right->right->right = NULL;

    if(isSymmetric(root)) printf("true\n");
    else printf("false\n");
    
    return 0;
}