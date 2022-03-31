#include <stdio.h>
#include <iostream>

using namespace std;

// 트리를 좌우반전 시킨후, 두개의 트리가 같은지 확인하는 방식!


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
    
    bool ans=true;
    TreeNode* mirror(TreeNode* root){ // 반전시키기
        
        if(root==NULL) return NULL;
        TreeNode* L = mirror(root->left);
        TreeNode* R = mirror(root->right);
        root->right=L;
        root->left=R;                       // 
        
        return root;
    }
    
    bool check(TreeNode* L, TreeNode *R){ //트리 두개 같은지 확인!
        
        if( L==NULL && R==NULL ) return true;
        else if( L==NULL || R==NULL ){ //둘 중에 하나가 먼저 NULL이면 false;
            return false;
        }

        if( L->val != R->val ) return false; //같지 않으면 false
        bool a = check(L->left, R->left);
        bool b = check(L->right, R->right);
        if( a == false || b== false ){ 
            return false;
        }
        
        return true;
    }
    
    bool isSymmetric(TreeNode* root) {
        if(root==NULL) return true; //주어진 트리가 NULL일 때 예외처리
        TreeNode* R= mirror(root->right);
        return check(root->left,R);
    }
    
};