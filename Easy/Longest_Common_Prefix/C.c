#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char* ans = (char*)malloc(strlen(strs[0]) + 1);
    int k = 0;
    do{
        ans[k] = strs[0][k];
    }while(strs[0][k++] != '\0');
    if(strsSize > 1){
        for (int i = 1; i < strsSize; i++){
            k = -1;
            while(ans[++k] && ans[k] == strs[i][k]);
            ans[k] = '\0';
        }
    }
    return ans;
}

int main(){
    char* strs[3] = {"flower", "flow", "flight"};
    printf("%s", longestCommonPrefix(strs, 3));
    return 0;
}