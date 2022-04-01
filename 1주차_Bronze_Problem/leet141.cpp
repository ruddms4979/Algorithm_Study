#include <stdio.h>
#include <iostream>
#include <map>

using namespace std;

struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode* , bool> mapCount;

        while(head){            
            if(mapCount[head] == true) return true;
            
            mapCount[head] = true;
            head = head->next;
        }

        return false;

    }
};