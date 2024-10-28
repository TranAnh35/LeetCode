#include <stdio.h>
#include <stdlib.h>

typedef struct keyValuePair {
    int key;
    int value;
    struct keyValuePair *next;
} keyValuePair;

typedef struct {
    keyValuePair** table;
    int size;
} MyHashMap;

MyHashMap* myHashMapCreate() {
    int initial_size = 1000;
    MyHashMap* hashMap = (MyHashMap*)malloc(sizeof(MyHashMap));
    hashMap->table = (keyValuePair**)malloc(sizeof(keyValuePair*) * initial_size);
    hashMap->size = initial_size;
    for (int i = 0; i < initial_size; i++) {
        hashMap->table[i] = NULL;
    }
    return hashMap;
}

int hash (int key, int size){
    return key % size;
}

void myHashMapFree(MyHashMap* obj) {
    for (int i = 0; i < obj->size; i++) {
        keyValuePair* current = obj->table[i];
        while (current != NULL) {
            keyValuePair* temp = current;
            current = current->next;
            free(temp);
        }
    }
    free(obj->table);
    free(obj);
}

void myHashMapPut(MyHashMap* obj, int key, int value) {
    int index = hash(key, obj->size);
    keyValuePair* newNode = (keyValuePair*)malloc(sizeof(keyValuePair));
    newNode->key = key;
    newNode->value = value;
    newNode->next = NULL;

    if(obj->table[index] == NULL){
        obj->table[index] = newNode;
    }else{
        keyValuePair* current = obj->table[index];
        while(current->next != NULL){
            if(current->key == key){
                current->value = value;
                free(newNode);
                return;
            }
            current = current->next;
        }
        if(current->key == key){
            current->value = value;
            free(newNode);
        }else{
            current->next = newNode;
        }
    }
}

int myHashMapGet(MyHashMap* obj, int key) {
    int index = hash(key, obj->size);
    keyValuePair* current = obj->table[index];
    while (current != NULL) {
        if (current->key == key) {
            return current->value;
        }
        current = current->next;
    }
    return -1;
}

void myHashMapRemove(MyHashMap* obj, int key) {
    int index = hash(key, obj->size);
    keyValuePair* current = obj->table[index];
    keyValuePair* prev = NULL;
    
    while (current != NULL) {
        if (current->key == key) {
            if (prev != NULL) {
                prev->next = current->next;
            } else {
                obj->table[index] = current->next;
            }
            free(current);
            return;
        }
        prev = current;
        current = current->next;
    }
}

int main() {
    MyHashMap* hashMap = myHashMapCreate();
    myHashMapPut(hashMap, 1, 1);
    myHashMapPut(hashMap, 2, 2);
    printf("%d\n", myHashMapGet(hashMap, 1));
    printf("%d\n", myHashMapGet(hashMap, 3));
    myHashMapPut(hashMap, 2, 1);
    printf("%d\n", myHashMapGet(hashMap, 2));
    myHashMapRemove(hashMap, 2);
    printf("%d\n", myHashMapGet(hashMap, 2));
    return 0;
}