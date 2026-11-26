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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* newhead=new ListNode , *tail = newhead, *head1 = list1, *head2 = list2;
        
        while(head1 != NULL && head2!=  NULL){
            
            if(head1->val > head2->val){
                tail->next=head2;
                tail=tail->next;
                head2=head2->next;
            }else{
                tail->next=head1;
                tail=tail->next;
                head1=head1->next;
            }
        }
        if(head2!=NULL)tail->next=head2;
        else if(head1!=NULL)tail->next=head1;
        return newhead->next;
    }
};

