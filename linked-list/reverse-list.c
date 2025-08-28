#include <stdio.h>
#include "linked-list.h"

struct ListNode* reverseList(struct ListNode* head) {
    if(head == NULL) return head; 
    struct ListNode* res = reverseList(head->next);
    res->next = head; 
    return res; 
}

int main(int argc, char** argv) {
    struct ListNode n1, n2, n3, n4, *res; 
    n1.val = 1; 
    n1.next = &n2; 
    n2.val = 2; 
    n2.next = &n3; 
    n3.val = 3; 
    n3.next = &n4; 
    n4.val = 4; 
    n4.next = NULL;
    printf("Before reversing"); 
    printList(&n1); 
    res = reverseList(&n1); 
    printf("After reversing"); 
    printList(res);
}