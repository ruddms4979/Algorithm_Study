#include <stdio.h>
#include <iostream>
using namespace std;


 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };

class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if ((nullptr == root) || ((nullptr == root->left) && (nullptr == root->right)))
            return root;
        
        swapLeftnRight(root);
        return root;
    }
    
    void swapLeftnRight(TreeNode *node) {
    
        if (nullptr != node) {
            std::swap(node->left, node->right);
            swapLeftnRight(node->left);
            swapLeftnRight(node->right);
        }
    }
};