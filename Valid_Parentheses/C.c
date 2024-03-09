#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isValid(char* s) {
    int k = 0;
    int n = strlen(s);
    if(s[n-1] == '(' || s[n-1] == '[' || s[n-1] == '{') return false;
    char stack[n/2+1];
    for(int i = 0; i < n; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
            stack[k++] = s[i];
        }else{
            if(k == 0) return false;
            if(s[i] == ')' && stack[k-1] != '(') return false;
            if(s[i] == ']' && stack[k-1] != '[') return false;
            if(s[i] == '}' && stack[k-1] != '{') return false;
            k--;
        }
    }
    return k == 0;
}

int main(){
    char s[] = "()";
    printf("%d\n", isValid(s));
    return 0;
}