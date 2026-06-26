class Solution {
private:
    bool similar(TreeNode* treeleft,TreeNode* treeright){
        if(treeleft==NULL&&treeright==NULL){
            return true;
        }
        if(treeleft==NULL||treeright==NULL){
            return false;
        }
        if(treeleft->val!=treeright->val){
            return false;
        }
        bool outside=similar(treeleft->left,treeright->right);
        bool inside=similar(treeleft->right,treeright->left);
        return outside && inside;
    }
public:
    bool isSymmetric(TreeNode* root) {
        if(root==NULL){
            return true;
        }
        return similar(root->left,root->right);
    }
};
