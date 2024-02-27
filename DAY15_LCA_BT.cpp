class Solution {
public:
    Node* LCA(Node* root, int n1, int n2) {
        //base case
        if(root == NULL){
            return NULL;
        }

        //Case 1 : p and q both comes in the left subtree of root node - Recursion
        if(n1<root->data && n2<root->data){
            Node* leftAns = LCA(root->left, n1, n2);
            return leftAns;
        }

        //Case 2 : p and q both comes in the right subtree of root node - Recursion
        if(n1>root->data && n2>root->data){
            Node* rightAns = LCA(root->right, n1, n2);
            return rightAns;
        }

        //Case 3 : p is in the left subtree of root node && q is in the right subtree of root node
        if(n1<root->data && n2>root->data){
            return root;
        }

        //Case 4 : q is in the left subtree of root node && p is in the right subtree of root node
        if(n1>root->data && n2<root->data){
            return root;
        }

        return root;
    }
};
