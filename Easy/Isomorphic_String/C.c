#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define MAX_SIZE 256

bool isIsomorphic(char * s, char * t){
    int len_s = strlen(s);
    int len_t = strlen(s);
    if(len_s != len_t) return false;
    int char_map_s[MAX_SIZE] = {0};
    int char_map_t[MAX_SIZE] = {0};

    for(int i = 0; i < len_s; i++){
        int index_s = s[i];
        int index_t = t[i];

        if(char_map_s[index_s] != char_map_t[index_t]) return false;
        char_map_s[index_s] = i + 1;
        char_map_t[index_t] = i + 1;
    }
    return true;
}

int main() {
    char s[] = "egg";
    char t[] = "add";
    if(isIsomorphic(s, t)) printf("true\n");
    else printf("false\n");
    return 0;
}