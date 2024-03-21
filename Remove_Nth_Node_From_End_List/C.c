#include <stdio.h>
#include <stdlib.h>

struct ListNode{
    int val;
    struct ListNode *next;
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

struct ListNode* removeNthFromEnd(struct ListNode* head, int n) {
    int count = 0;
    struct ListNode *temp = head;
    while(temp){
        count++;
        temp = temp->next;
    }
    if(count == 1) return NULL;
    if(count == n) return head->next;
    temp = head;
    for(int i = 0; i < count - n - 1; i++){
        temp = temp->next;
    }
    temp->next = temp->next->next;
    return head;
}

int main(){
    struct ListNode* head = NULL;
    for(int i = 1; i <= 2; i++)
        push_bach(&head, i);
    head = removeNthFromEnd(head, 2);
    printList(head);
    return 0;
}