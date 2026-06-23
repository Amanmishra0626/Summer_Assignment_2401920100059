class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> ans;
        stack<TreeNode*>st;
        TreeNode *element=root;
        while(element!=NULL||!st.empty()){
            while(element!=NULL){
                st.push(element);
                element=element->left;
            }
            element=st.top();
            st.pop();
            ans.push_back(element->val);
            element=element->right;
        }
        return ans;
    }
};
