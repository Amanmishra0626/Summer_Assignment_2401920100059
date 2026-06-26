class Codec {
private:
    void serializeHelper(TreeNode* node, stringstream& ss) {
        if (node == nullptr) {
            ss << "#,";
            return;
        }
        
        ss << node->val << ",";
        serializeHelper(node->left, ss);
        serializeHelper(node->right, ss);
    }

    TreeNode* deserializeHelper(stringstream& ss) {
        string token;
        if (!getline(ss, token, ',')) {
            return nullptr;
        }

        if (token == "#") {
            return nullptr;
        }

        TreeNode* root = new TreeNode(stoi(token));
        root->left = deserializeHelper(ss);
        root->right = deserializeHelper(ss);
        
        return root;
    }

public:
    string serialize(TreeNode* root) {
        stringstream ss;
        serializeHelper(root, ss);
        return ss.str();
    }

    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return deserializeHelper(ss);
    }
};
