#include <stdio.h>
#include <stdlib.h>

int getLen(int n){
    int i = 0;
    while(n > 0){
        if(n % 26 == 0)
            n = (n - 1) / 26;
        else
            n /= 26;
        ++i;
    }
    return i;
}

char * convertToTitle(int columnNumber){
    int len = getLen(columnNumber);
    char* res = calloc((len + 1), sizeof(char));
    while(len > 0){
        if(columnNumber % 26 == 0){
            res[--len] = 'Z';
            columnNumber = (columnNumber - 1) / 26;
        }else{
            res[--len] = 'A' + (columnNumber % 26) - 1;
            columnNumber /= 26;
        }
    }
    return res;
}

int main(){
    int columnNumber = 701;
    char* res = convertToTitle(columnNumber);
    printf("%s\n", res);
    return 0;
}