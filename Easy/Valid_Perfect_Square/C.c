#include <stdio.h>
#include <stdbool.h>

bool isPerfectSquare(int num){
    double x = sqrt(num);
    int y = (int)x;
    if(x == y){
        return true;
    }
    return false;
}

int main() {
    int num = 16;
    if(isPerfectSquare(num)) printf("true\n");
    else printf("false\n");
    return 0;
}