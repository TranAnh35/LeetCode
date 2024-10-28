#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
    int n = strlen(a), m = strlen(b), c = 0;
    int max = 2 + ( n > m ? n : m);
    char* res = calloc(max, sizeof(char));
    memset(res, '0', sizeof(char)*max);
    res[--max] = '\0';
    while(max--){
        c += (n > 0? a[--n] - '0' : 0) + (m > 0? b[--m] - '0' : 0);
        res[max] = c % 2 + '0';
        c /= 2;
    }
    if(res[0] == '0') res++;
    return res;
}

int main() {
    char a[] = "11";
    char b[] = "1";
    char *result = addBinary(a, b);
    printf("%s\n", result);
    return 0;
}