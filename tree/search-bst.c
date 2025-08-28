#include <stdio.h>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

struct TreeNode* searchBST(struct TreeNode* root, int val) {
    if(root == NULL || root->val == val) return root; 
    if(root->val < val) {
        return searchBST(root->right, val); 
    } else {
        return searchBST(root->left, val); 
    }
}

int main(int argc, char** argv) {
}