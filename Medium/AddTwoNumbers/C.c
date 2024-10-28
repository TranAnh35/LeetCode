#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

void newNode(struct ListNode** n, int val) {
    struct ListNode *newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
    newNode->val = val;
    newNode->next = NULL;
    if(*n == NULL){
        (*n) = newNode;
    }else{
        struct ListNode *p = *n;
        while(p->next!= NULL){
            p = p->next;
        }
        p->next = newNode;
    }
}

// struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
//     struct ListNode *result = (struct ListNode*)malloc(sizeof(struct ListNode));
//     struct ListNode *head = result;
//     int rmb = 0;
//     while(l1 != NULL || l2 != NULL) {
//         int val1 = (l1 != NULL) ? l1->val : 0;
//         int val2 = (l2 != NULL) ? l2->val : 0;
//         int sum = val1 + val2 + rmb;
//         result->val = sum % 10;
//         rmb = sum / 10;
//         if(l1 != NULL) l1 = l1->next;
//         if(l2 != NULL) l2 = l2->next;
//         if(l1 != NULL || l2 != NULL || rmb > 0){
//             result->next = (struct ListNode*)malloc(sizeof(struct ListNode));
//             result = result->next;
//         }
//     }
//     if(rmb > 0){
//         result->val = rmb;
//     }
//     result->next = NULL;
//     return head;
// }

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode *t1 = l1, *t2 = l2;
    struct ListNode *head=NULL, *t3=NULL;
    int sum=0;
    
    while(t1 || t2 || sum){
        if(t1){
            sum += t1->val;
            t1 = t1->next;
        }if(t2){
            sum += t2->val;
            t2 = t2->next;
        }
        struct ListNode *new = malloc(sizeof(struct ListNode));
        new->val = sum%10;
        sum /= 10;
        if(head){
            t3->next = new;
            t3 = new;
        }else
            head = t3 = new;
    }
    t3->next = NULL;
    return head;
}


int main () {
    struct ListNode *l1 = NULL;
    struct ListNode *l2 = NULL;

    newNode(&l1,9);
    newNode(&l1,9);
    newNode(&l1,9);
    newNode(&l1,9);
    newNode(&l1,9);
    newNode(&l1,9);
    newNode(&l1,9);

    newNode(&l2,9);
    newNode(&l2,9);
    newNode(&l2,9);
    newNode(&l2,9);
    
    struct ListNode *result = addTwoNumbers(l1, l2);
    while(result!= NULL) {
        printf("%d\n", result->val);
        result = result->next;
    }
    free(l1);
    free(l2);
    free(result);
    return 0;
}