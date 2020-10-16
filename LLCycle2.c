Q.Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally,
pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
 
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast,*slow;
    fast=slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow)
        {
            struct ListNode *ptr=head;
            while(ptr!=fast)
            {
                ptr=ptr->next;
                fast=fast->next;
            }
        return ptr;
      }
    }
    return NULL;
}
