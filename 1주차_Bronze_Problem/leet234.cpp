#include <stdio.h>
#include <iostream>
using namespace std;


struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    bool detPd(ListNode* & left, ListNode* right)
    {
        if(right == NULL)
            return true;
        bool a = detPd(left, right->next);
        if(a == false)
            return false;
        if(left->val != right->val)
            a = false;
        left = left->next;
        return a;
    }
    
    bool isPalindrome(ListNode* head) {
        return detPd(head, head);
    }
};