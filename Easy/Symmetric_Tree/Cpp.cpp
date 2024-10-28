#include <bits/stdc++.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        return root == NULL || check(root->left, root->right);
    }

    bool check(TreeNode* a, TreeNode *b){
        if(a == NULL || b == NULL)
            return a == b;
        if(a->val != b->val) return false;
        return check(a->left, b->right) && check(a->right, b->left);
    }
};

int main() {
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->left->left = new TreeNode(3);
    root->left->right = new TreeNode(4);
    root->right = new TreeNode(2);
    root->right->left = new TreeNode(4);
    root->right->right = new TreeNode(3);

    Solution sol;
    if(sol.isSymmetric(root)) cout << "true" << endl;
    else cout << "false" << endl;
    
    return 0;
}