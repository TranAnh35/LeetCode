#include <stdio.h>
#include <stdlib.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* newNode(int val){
    struct TreeNode* temp = (struct TreeNode*)malloc(sizeof(struct TreeNode));
    temp->val = val;
    temp->left = NULL;
    temp->right = NULL;
    return temp;
}

struct TreeNode* sortedArrayToBST(int* nums, int numsSize) {
    if(numsSize == 0)
        return NULL;
    int mid = numsSize / 2;
    struct TreeNode* root = newNode(nums[mid]);
    root->left = sortedArrayToBST(nums, mid);
    root->right = sortedArrayToBST(nums + mid + 1, numsSize - mid - 1);
    return root;
}

void printInorder(struct TreeNode* node){
    if(node == NULL)
        return;
    printInorder(node->left);
    printf("%d ", node->val);
    printInorder(node->right);
}

int main(){
    int nums[] = {-10,-3,0,5,9};
    int numsSize = 5;
    struct TreeNode* root = sortedArrayToBST(nums, numsSize);
    printInorder(root);
    return 0;
}