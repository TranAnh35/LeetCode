#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
    int n = strlen(haystack);
    int m = strlen(needle);
    if(m == 0) return 0;
    for(int i = 0; i < n; i++){
        int j = 0;
        for(j = 0; j < m; j++){
            if(haystack[i+j] != needle[j]){
                break;
            }
        }
        if(j == m) return i;
    }
    return -1;
}

int main(){
    char haystack[] = "hello";
    char needle[] = "ll";
    printf("%d\n", strStr(haystack, needle));
    return 0;
}