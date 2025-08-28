
#include <stdio.h>
#include "linked-list.h"

struct ListNode* swapPairs(struct ListNode* head) {
    if(head == NULL || head->next == NULL) {
        return head; 
    }
    struct ListNode* res = swapPairs(head->next->next); 
    int temp = head->val;
    head->val = head->next->val; 
    head->next->val = temp; 
    head->next->next = res; 
    return head; 

}

void printList(struct ListNode* head) {
    while(head != NULL) {
        printf("%d ", head->val); 
        head = head->next; 
    }
    printf("\n"); 
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
    printf("Before swapping"); 
    printList(&n1); 
    res = swapPairs(&n1); 
    printf("After swapping"); 
    printList(res); 
}