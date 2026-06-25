class Solution {
private:
    int maxi = 0;
    int calculateHeight(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int leftHeight = calculateHeight(node->left);
        int rightHeight = calculateHeight(node->right);
        maxi = max(maxi, leftHeight + rightHeight);
        return 1 + max(leftHeight, rightHeight);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        maxi = 0;
        calculateHeight(root);
        return maxi;
    }
};
