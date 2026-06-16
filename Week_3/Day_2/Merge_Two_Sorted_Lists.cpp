class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode temp;
        ListNode *start=&temp;
        while(list1!=NULL&&list2!=NULL){
            if(list1->val<=list2->val){
                start->next=list1;
                list1=list1->next;
            }
            else{
                start->next=list2;
                list2=list2->next;
            }
            start=start->next;
        }      
            if(list1!=NULL){
                start->next=list1;
            }
            else{
                start->next=list2;
            }
            return temp.next;
    }
};
