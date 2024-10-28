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
    vector<int> ans; 
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversal(root, ans);
        return ans;
    }

private:
    void inorderTraversal(TreeNode* Node, vector<int>& ans){
        if ( Node != nullptr ){
            inorderTraversal(Node->left, ans);
            ans.push_back(Node->val);
            inorderTraversal(Node->right, ans);
        }
    }

};

int main() {
    struct TreeNode root(1);
    struct TreeNode right(2);
    struct TreeNode left(3);

    root.left = NULL;
    root.right = &right;
    right.left = &left;
    right.right = NULL;
    left.left = NULL;
    left.right = NULL;

    Solution sol;
    vector<int> result = sol.inorderTraversal(&root);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
}