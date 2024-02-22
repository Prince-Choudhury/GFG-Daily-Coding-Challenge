//Function to return a list containing the preorder traversal of the tree.
vector<int> preorderUtil(Node* root, vector<int>& ans) {
    if (root == NULL) {
        return ans;
    }

    // NLR
    // N -> Current Node
    ans.push_back(root->data);

    // L -> Left part
    preorderUtil(root->left, ans);

    // R -> Right part
    preorderUtil(root->right, ans);

    return ans;
}

vector<int> preorder(Node* root) {
    vector<int> ans;
    return preorderUtil(root, ans);
}