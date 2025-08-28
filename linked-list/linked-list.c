#include <stdio.h>
#include "linked-list.h"

void printList(struct ListNode* head) {
    while(head != NULL) {
        printf("%d ", head->val); 
        head = head->next; 
    }
    printf("\n"); 
}