#include <stdio.h>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;



struct TreeNode {
      int val;
      TreeNode *left;
     TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };



class Solution2 {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> res;
        TreeNode *curr = root;
        while (curr) {
            if (!curr->left) {
                res.emplace_back(curr->val);
                curr = curr->right;
            } else {
                TreeNode *node = curr->left;
                while (node->right && node->right != curr) {
                    node = node->right;
                }
                if (!node->right) {
                    node->right = curr;
                    curr = curr->left;
                } else {
                    res.emplace_back(curr->val);
                    node->right = nullptr;
                    curr = curr->right;
                }
            }
        }
        return res;
    }
};