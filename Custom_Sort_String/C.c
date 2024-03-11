#include <stdio.h>
#include <string.h>

void swap(char* s, int i, int j){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
}

char* customSortString(char* order, char* s) {
    int count[26] = {0};
    for(int i = 0; i < strlen(order); i++){
        count[order[i] - 'a']++;
    }
    for(int i = 0; i < strlen(s); i++){
        if(count[s[i] - 'a'] > 0)
            count[s[i] - 'a']++;
    }
    int k = 0, j = 0, i = 0;
    while(i < strlen(s)){
        if(s[i] == order[k]){
            swap(s, i, j);
            if(count[s[j] - 'a'] == 2)
                k++;
            else if(count[s[j] - 'a'] > 2)
                count[s[j] - 'a']--;
            j++;
            i = j;
        }else{
            i++;
        }
    }
    return s;
}

int main(){
    char order[] = "exv";
    char s[] = "xwvee";
    printf("%s\n", customSortString(order, s));
    return 0;
}