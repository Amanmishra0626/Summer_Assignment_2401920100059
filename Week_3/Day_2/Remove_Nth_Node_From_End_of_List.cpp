class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode temp(0,head);
        ListNode *ptr1=&temp;
        ListNode *ptr2=&temp;
        for(int i=0;i<=n;i++){
            ptr1=ptr1->next;
        }
        while(ptr1!=NULL){
            ptr2=ptr2->next;
            ptr1=ptr1->next;
        }
        ListNode* nod= ptr2->next;
        ptr2->next=ptr2->next->next;
        delete nod;
        return temp.next;
    }
};
