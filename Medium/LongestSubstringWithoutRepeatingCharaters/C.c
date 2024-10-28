#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char * s){
    int i = 0;
    int j = 0;
    int max = 0;
    int len = strlen(s);
    int hash[128] = {0};
    while(j < len){
        if(hash[s[j]] == 0){
            hash[s[j]] = 1;
            j++;
            max = max > (j - i) ? max : (j - i);
        }else{
            hash[s[i]] = 0;
            i++;
        }
    }
    return max;
};

int main() {
    char *s = "pwwkew";
    printf("%d\n", lengthOfLongestSubstring(s));
    return 0;
}