class Solution {
public:
    vector<int> postOrder(Node* root) {
        vector<int> ans;
        if (root == NULL) {
            return ans;
        }

        stack<Node*> s1, s2;
        s1.push(root);

        while (!s1.empty()) {
            Node* current = s1.top();
            s1.pop();
            s2.push(current);

            if (current->left) {
                s1.push(current->left);
            }

            if (current->right) {
                s1.push(current->right);
            }
        }

        while (!s2.empty()) {
            ans.push_back(s2.top()->data);
            s2.pop();
        }

        return ans;
    }
};
