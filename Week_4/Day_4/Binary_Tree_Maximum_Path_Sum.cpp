class Solution {
private:
    int maxi = INT_MIN;
    int calculateGain(TreeNode* node) {
        if (node == nullptr) {
            return 0;
        }
        int leftGain = max(0, calculateGain(node->left));
        int rightGain = max(0, calculateGain(node->right));
        int currentPathSum = node->val + leftGain + rightGain;
        maxi = max(maxi, currentPathSum);
        return node->val + max(leftGain, rightGain);
    }
public:
    int maxPathSum(TreeNode* root) {
        maxi = INT_MIN;
        calculateGain(root);
        return maxi;
    }
};
