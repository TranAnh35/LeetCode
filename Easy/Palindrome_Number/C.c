#include <stdio.h>
#include <stdbool.h>

#define ll long long

bool isPalindrome(int x) {
    ll temp = x, rev = 0, mod = 0;
    ll n = x;
    while(n > 0){
        mod = n % 10;
        rev = rev * 10 + mod;
        n = n / 10;
    }
    return (rev == x);
}

int main(){
    int x = 121;
    printf("%d\n", isPalindrome(x));
    return 0;
}