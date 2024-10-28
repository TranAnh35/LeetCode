#include <stdio.h>

bool isPowerOfThree(int n) {
    if (n > 0){
        while (n % 3 == 0){
            n /=3 ;
        }
        return n == 1;
    }
    else
        return false;
}

int main() {
    int n = 27;
    if(isPowerOfThree(n)) printf("true\n");
    else printf("false\n");
    return 0;
}