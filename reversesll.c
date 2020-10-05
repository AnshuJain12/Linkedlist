//Definition for singly-linked list.
  // struct ListNode{
  //    int data;
  //    struct ListNode *next;
  // };
 


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode *prev,*curr,*nextnode;
    curr=nextnode=head;
    prev=NULL;
    
    while(nextnode!=NULL){
        nextnode=nextnode->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    head=prev;
    return head;
}
