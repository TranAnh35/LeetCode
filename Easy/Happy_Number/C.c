#include <stdio.h>
#include <stdbool.h>

bool isHappy(int n){
    if(n == 1) return true;
    else if(n == 4) return false;
    else{
        int x = n, sum = 0;
        while(x != 0){
            int k = x % 10;
            sum += (k * k);
            x /= 10;
        }
        return isHappy(sum);
    }
}

int main() {
    int n = 19;
    if(isHappy(n)) printf("true\n");
    else printf("false\n");
    return 0;
}