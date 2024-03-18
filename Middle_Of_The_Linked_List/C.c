#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode* next;
};

void printList(struct ListNode* head){
    while(head){
        printf("%d ", head->val);
        head = head->next;
    }
    printf("\n");
}

struct ListNode* newNode(int val){
    struct ListNode* temp = (struct ListNode*)malloc(sizeof(struct ListNode));
    temp->val = val;
    temp->next = NULL;
    return temp;
}

void push_bach(struct ListNode** head, int val){
    struct ListNode* temp = newNode(val);
    if(*head == NULL){
        *head = temp;
        return;
    }
    struct ListNode* last = *head;
    while(last->next)
        last = last->next;
    last->next = temp;
}

struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode* slow = head;
    struct ListNode* fast = head;
    while(fast && fast->next){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}

int main(){
    struct ListNode* head = NULL;
    int arr[] = {1,2,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for(int i = 0; i < n; i++)
        push_bach(&head, arr[i]);
    head = middleNode(head);
    printList(head);
    return 0;
}