#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(char * s){
    int j ,k;
    j = k = 0;
    for(int i = 0; s[i] != '\0' ; i++)
    {
        if(('a' <= s[i] && s[i] <= 'z') || ('0' <= s[i] && s[i] <= '9')) s[j++] = s[i];
        else if('A' <= s[i] && s[i] <= 'Z') s[j++] = s[i] + 32;
    }
    j--;
    while(k<j)
    {
        if(s[k++] != s[j--])
            return false;
    }
    return true;
}

int main() {
    char s[] = "amanaplanacanalpanama";
    if(isPalindrome(s)) printf("true\n");
    else printf("false\n");
}