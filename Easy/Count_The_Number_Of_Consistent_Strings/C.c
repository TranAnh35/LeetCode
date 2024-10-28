#include <stdio.h>

int countConsistentStrings(char * allowed, char ** words, int wordsSize){
    int vocab[26] = {0};
    for (int i = 0; allowed[i] != '\0'; i++){
        vocab[allowed[i] - 'a'] = 1;
    }

    int count = 0;
    for (int i = 0; i < wordsSize; i++){
        int flag = 1;
        for (int j = 0; words[i][j] != '\0'; j++){
            if (vocab[words[i][j] - 'a'] == 0){
                flag = 0;
                break;
            }
        }
        count += flag;
    }
    return count;
}

int main() {
    char allowed[] = "ab";
    char *words[] = {"ad","bd","aaab","baa","badab"};
    int wordsSize = 5;
    printf("%d\n", countConsistentStrings(allowed, words, wordsSize));
    return 0;
}