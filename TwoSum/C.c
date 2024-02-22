#include <stdio.h>
#include <stdlib.h>

// This is may code
// int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//     int* result = (int*)malloc(2 * sizeof(int));
//     for (int i = 0; i < numsSize; i++) {
//         for (int j = i + 1; j < numsSize; j++) {
//             if (nums[i] + nums[j] == target) {
//                 result[0] = i;
//                 result[1] = j;
//                 *returnSize = 2;
//                 return result;
//             }
//         }
//     }
//     return NULL;
// }

// This is the code of a pro coder
#define HASH_SIZE 10000

typedef struct HashNode {
    int key;
    int value;
    struct HashNode* next;
} HashNode;

typedef struct {
    HashNode* buckets[HASH_SIZE];
} HashMap;

HashMap* createHashMap() {
    HashMap* hashMap = (HashMap*)malloc(sizeof(HashMap));
    for (int i = 0; i < HASH_SIZE; i++) {
        hashMap->buckets[i] = NULL;
    }
    return hashMap;
}

int hash(int key) {
    return abs(key) % HASH_SIZE;
}

void insert(HashMap* hashMap, int key, int value) {
    int index = hash(key);
    HashNode* newNode = (HashNode*)malloc(sizeof(HashNode));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;
    
    if (hashMap->buckets[index] == NULL) {
        hashMap->buckets[index] = newNode;
    } else {
        HashNode* current = hashMap->buckets[index];
        while (current->next != NULL) {
            current = current->next;
        }
        current->next = newNode;
    }
}

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    HashMap* hashMap = createHashMap();
    int* result = (int*)malloc(2 * sizeof(int));
    
    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];
        int complementIndex = hash(complement);
        
        HashNode* node = hashMap->buckets[complementIndex];
        while (node != NULL) {
            if (node->key == complement) {
                result[0] = node->value;
                result[1] = i;
                *returnSize = 2;
                return result;
            }
            node = node->next;
        }
        
        insert(hashMap, nums[i], i);
    }
    
    *returnSize = 0;
    return result;
}


int main () {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int returnSize;
    int* result = twoSum(nums, 4, target, &returnSize);
    printf("%d %d\n", result[0], result[1]);
    return 0;
}