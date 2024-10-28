#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* removeElements(struct ListNode* head, int val) 
{
    struct ListNode dummy;
    dummy.next = head;
    struct ListNode *curr = &dummy;
    while (curr->next != NULL)
    {
        if (curr->next->val == val) curr->next = curr->next->next;
        else curr = curr->next;
    }
    return dummy.next;
}

int main() {
    struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->val = 1;
    head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val = 2;
    head->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val = 6;
    head->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val = 3;
    head->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->val = 4;
    head->next->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->next->val = 5;
    head->next->next->next->next->next->next = (struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->next->next->val = 6;
    head->next->next->next->next->next->next->next = NULL;
    struct ListNode *result = removeElements(head, 6);
    while (result != NULL)
    {
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}