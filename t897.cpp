#include <iostream>

struct TreeNode
{
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(const int& x) : val(x), left(nullptr), right(nullptr) {}
};

TreeNode* increasingBST(TreeNode* root, TreeNode* parent = nullptr)
{
    if(!root)
        return parent;
    TreeNode* result = increasingBST(root->left, root);
    root->left = nullptr;
    root->right = increasingBST(root->right, parent);
    return result;
}

int main()
{
}
