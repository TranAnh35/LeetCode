#include <stdio.h>
#include <math.h>

int pivotInteger(int n) {
    // int left = 0, right = 0;
    // for(int i = 1; i <= n; i++){
    //     left = i * (i + 1) / 2;
    //     right = (n * (n + 1) / 2) - (i * (i - 1) / 2);

    //     if(left == right){
    //         return i;
    //     }
    // }
    // return -1;

    int sum = n * (n + 1) / 2;
        if(sqrt(sum) == (int)sqrt(sum)){
            return sqrt(sum);
        }
        return -1;
}

int main(){
    int n = 8;
    printf("%d\n", pivotInteger(n));
    return 0;
}