class Solution {
private:
    TreeNode* prev = nullptr;
public:
    bool isValidBST(TreeNode* root) {
        if (root == nullptr) {
            return true;
        }
        if (isValidBST(root->left) == false) {
            return false;
        }
        if (prev != nullptr && root->val <= prev->val) {
            return false;
        }
        prev = root;
        return isValidBST(root->right);
    }
};
