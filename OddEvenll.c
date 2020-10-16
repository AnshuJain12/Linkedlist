Q.Given a singly linked list, group all odd nodes together followed by the even nodes. Please note here we are talking about the node number and not the value in the nodes.


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* oddEvenList(struct ListNode* head){
  struct ListNode *odd,*even,*evenHead;
    if(head==NULL){
        return NULL;
    }
    odd=head;
    even=head->next;
    evenHead=even;
    while(even!=NULL && even->next!=NULL){
        odd->next=even->next;
        odd=odd->next;
        even->next=odd->next;
        even=even->next;
    }
    odd->next=evenHead;
    return head;
    
}
