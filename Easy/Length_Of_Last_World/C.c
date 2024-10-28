#include <stdio.h>
#include <string.h>

int lengthOfLastWord(char* s) {
    int len = 0;
    int n = strlen(s);
    for(int i = n - 1; i > -1; i--){
        if(s[i] == ' ' && len > 0){
            return len;
        }else{
            if(s[i] != ' '){
                len++;
            }
        }
    }
    return len;
}

int main(){
    char s[] = "Hello World";
    printf("%d\n", lengthOfLastWord(s));
    return 0;
}