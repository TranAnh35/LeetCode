#include <stdio.h>
#include <math.h>

int mySqrt(int x) {
    return pow(x, 0.5);
}

int main(){
    int x = 8;
    int result = mySqrt(x);
    printf("%d\n", result);
    return 0;
}