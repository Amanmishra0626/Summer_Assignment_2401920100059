class Solution {
private:
    int preorderIndex = 0;
    unordered_map<int, int> inorderMap;

    TreeNode* buildTreeHelper(vector<int>& preorder, int inorderStart, int inorderEnd) {
        if (inorderStart > inorderEnd) {
            return nullptr;
        }

        int rootValue = preorder[preorderIndex];
        preorderIndex++;

        TreeNode* root = new TreeNode(rootValue);
        int rootInorderIndex = inorderMap[rootValue];

        root->left = buildTreeHelper(preorder, inorderStart, rootInorderIndex - 1);
        root->right = buildTreeHelper(preorder, rootInorderIndex + 1, inorderEnd);

        return root;
    }

public:
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        preorderIndex = 0;
        inorderMap.clear();

        for (int i = 0; i < inorder.size(); ++i) {
            inorderMap[inorder[i]] = i;
        }

        return buildTreeHelper(preorder, 0, inorder.size() - 1);
    }
};
