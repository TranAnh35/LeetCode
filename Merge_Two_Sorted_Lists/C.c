#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

// struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
//     if(!list1) return list2;
//     if(!list2) return list1;

//     struct ListNode *ans;
//     struct ListNode **ptr = &ans;
//     struct ListNode **node;

//     for(; list1 && list2; *node = (*node)->next){
//         node = (list1->val < list2->val) ? &list1 : &list2;
//         *ptr = *node;
//         ptr = &(*ptr)->next;
//     }
//     *ptr = (struct ListNode*)((uintptr_t)list1 | (uintptr_t)list2);
//     return ans;
// }

struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    if(!list1) return list2;
    if(!list2) return list1;

    if(list1->val < list2->val) {
        list1->next = mergeTwoLists(list1->next, list2);
        return list1;
    } else {
        list2->next = mergeTwoLists(list1, list2->next);
        return list2;
    }
}

int main(){
    struct ListNode* list1 = malloc(sizeof(struct ListNode));
    list1->val = 1;
    list1->next = malloc(sizeof(struct ListNode));
    list1->next->val = 2;
    list1->next->next = malloc(sizeof(struct ListNode));
    list1->next->next->val = 4;
    list1->next->next->next = NULL;
    struct ListNode* list2 = malloc(sizeof(struct ListNode));
    list2->val = 1;
    list2->next = malloc(sizeof(struct ListNode));
    list2->next->val = 3;
    list2->next->next = malloc(sizeof(struct ListNode));
    list2->next->next->val = 4;
    list2->next->next->next = NULL;
    struct ListNode* result = mergeTwoLists(list1, list2);
    while(result != NULL){
        printf("%d ", result->val);
        result = result->next;
    }
    return 0;
}