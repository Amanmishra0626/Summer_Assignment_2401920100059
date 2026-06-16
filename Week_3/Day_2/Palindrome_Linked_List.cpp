class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *slow=head;
        ListNode* fast=head;
        while(fast!=NULL&&fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* prev=NULL;
        ListNode* current=slow;
        while(current!=NULL){
            ListNode* temp=current->next;
            current->next=prev;
            prev=current;
            current=temp;
        }
        while(prev!=NULL){
            if(head->val!=prev->val){
                return false;
            }
            head=head->next;
            prev=prev->next;
        }
        return true;
    }
};
