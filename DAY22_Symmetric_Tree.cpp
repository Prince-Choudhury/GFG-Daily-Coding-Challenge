class Solution {
public:
    bool isSymmetric(struct Node* root) {
        if (root == nullptr) {
            return true;  // An empty tree is symmetric.
        }

        return isMirror(root->left, root->right);
    }

    bool isMirror(Node* left, Node* right) {
        // If both nodes are null, they are symmetric.
        if (left == nullptr && right == nullptr) {
            return true;
        }

        // If one of the nodes is null (and the other is not), they are not symmetric.
        if (left == nullptr || right == nullptr) {
            return false;
        }

        // Nodes are symmetric if their values are equal, and the left subtree is a mirror of the right subtree
        return (left->data == right->data) &&
               isMirror(left->left, right->right) &&
               isMirror(left->right, right->left);
    }
};