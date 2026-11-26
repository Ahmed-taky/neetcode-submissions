/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
public:
    map<ListNode*,bool>m ;
    bool hasCycle(ListNode* head) {
        ListNode* temp = head ;
        while(m[temp] == false && temp != NULL){
            m[temp]=true;
            temp = temp->next;
            
        }
        if(temp == NULL) return false ;
        return true ;
    }
};
