Q.Given a singly linked list, determine if it is a palindrome.

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* reverse(struct ListNode* head){
    struct ListNode* prev,*curr,*nextnode;
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

bool isPalindrome(struct ListNode* head){
struct ListNode *fast,*slow;
    fast=slow=head;
    while(fast!=NULL && fast->next!=NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    fast=head;
    slow=reverse(slow);
    while(slow!=NULL){
        if(slow->val!=fast->val){
            return false;
        }
        slow=slow->next;
        fast=fast->next;
    }
    return true;
}
