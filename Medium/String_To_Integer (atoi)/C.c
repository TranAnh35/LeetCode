#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myAtoi(char* s){
    int i = 0, sign = 1, res = 0;
    while(s[i] == ' ') i++;
    if(s[i] == '-' || s[i] == '+') sign = 1 - 2 * (s[i++] == '-');
    while(s[i] >= '0' && s[i] <= '9'){
        if(res > INT_MAX / 10 || (res == INT_MAX / 10 && s[i] - '0' > 7)){
            if(sign == 1) return INT_MAX;
            else return INT_MIN;
        }
        res = res * 10 + (s[i++] - '0');
    }
    return res * sign;
}

int main(){
    char s[] = "42";
    printf("%d\n", myAtoi(s));
    return 0;
}