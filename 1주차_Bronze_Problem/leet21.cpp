#include <stdio.h>
#include <iostream>
using namespace std;

// 솔루션 참고함! 
// nullptr 사용

//링크드 리스트 만들기 

  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ch = new ListNode(0);
        ListNode* answer = ch;
 
        
        while (list1 != nullptr || list2 != nullptr) {
            
            if (list1 == nullptr) {
                
                answer->next = new ListNode(list2->val);
                answer = answer->next;
                list2 = list2->next;
                
               
            } else if (list2 == nullptr) {
                
                answer->next = new ListNode(list1->val);
                answer = answer->next;
                list1 = list1->next;
                
            } else {
                
                if (list1->val <= list2->val) {
                    answer->next = new ListNode(list1->val);
                    answer = answer->next;
                    list1 = list1->next;
              } else {
                    answer->next = new ListNode(list2->val);
                    answer = answer->next;
                    list2 = list2->next;
              }
            }
        }
        
        
        return ch->next;
    }



        
        
    
};