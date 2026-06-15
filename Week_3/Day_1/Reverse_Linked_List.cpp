class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *prev=NULL;
        ListNode *current=head;
        while(current!=NULL){
            ListNode *nextptr=current->next;
            current->next=prev;
            prev=current;
            current=nextptr;
        }
        return prev;
    }
};
