#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* deleteDuplicates(struct ListNode* head){
    struct ListNode *trav = head, *skip;
    while(trav !=  NULL){
        skip = trav->next;
        while(skip != NULL && trav->val == skip->val){
            skip = skip->next;
        }
        trav->next = skip;
        trav = skip;
    }
    return head;
}

void printList(struct ListNode* head){
    struct ListNode* temp=head;
    while(temp!=NULL){
        printf("%d ",temp->val);
        temp=temp->next;
    }
    printf("\n");
}

int main(){
    struct ListNode *head=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->val=1;
    head->next=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->val=1;
    head->next->next=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->val=2;
    head->next->next->next=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->val=3;
    head->next->next->next->next=(struct ListNode*)malloc(sizeof(struct ListNode));
    head->next->next->next->next->val=3;
    head->next->next->next->next->next=NULL;
    printList(head);
    head=deleteDuplicates(head);
    printList(head);
    return 0;
}