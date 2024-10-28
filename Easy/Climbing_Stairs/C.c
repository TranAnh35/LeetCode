#include <stdio.h>

int climbStairs(int n){
    int a=1,b=2;
    if (n<3){
        return n;
    }else{
        for(int i=0;i<n-2;i++){
            int c=b;
            b=a+b;
            a=c;

        }
        return b;

    }

}

int main(){
    int n = 3;
    int result = climbStairs(n);
    printf("%d\n", result);
    return 0;
}