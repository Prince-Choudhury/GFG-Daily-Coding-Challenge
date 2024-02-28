class Solution {
public:
    bool solve(Node* root, long long int lowerBound, long long int upperBound){
        if(root == NULL){
            return true;
        }

        bool cond1 = (root->data>lowerBound);
        bool cond2 = (root->data<upperBound);
        bool leftAns = solve(root->left, lowerBound, root->data);
        bool rightAns = solve(root->right, root->data, upperBound);

        if(cond1 && cond2 && leftAns && rightAns){
            return true;
        }
        else{
            return false;
        }
    }
    bool isBST(Node* root) {
        
        long long int lowerBound = -2147483667;
        long long int upperBound = 2147483667;

        bool ans = solve(root, lowerBound, upperBound);

        return ans;
    }
};
