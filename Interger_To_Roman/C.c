#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* intToRoman(int num) {
    char* ones[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
    char* tens[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
    char* hrns[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
    char* ths[] = {"", "M", "MM", "MMM"};
    char* result = (char*)calloc(16, sizeof(char));

    strcat(result, ths[num / 1000]);
    strcat(result, hrns[(num % 1000) / 100]);
    strcat(result, tens[(num % 100) / 10]);
    strcat(result, ones[num % 10]);

    return result;
}

// This my code
// char* intToRoman(int num){
//     char* ans = malloc(sizeof(char) * 16); // MMMDCCCLXXXVIII : 16
//     int i = 0;
//     while(num != 0){
//         if(num >= 1000){
//             ans[i++] = 'M';
//             num -= 1000;
//         }else if(num >= 900){
//             ans[i++] = 'C';
//             ans[i++] = 'M';
//             num -= 900;
//         }else if(num >= 500){
//             ans[i++] = 'D';
//             num -= 500;
//         }else if(num >= 400){
//             ans[i++] = 'C';
//             ans[i++] = 'D';
//             num -= 400;
//         }else if(num >= 100){
//             ans[i++] = 'C';
//             num -= 100;
//         }else if(num >= 90){
//             ans[i++] = 'X';
//             ans[i++] = 'C';
//             num -= 90;
//         }else if(num >= 50){
//             ans[i++] = 'L';
//             num -= 50;
//         }else if(num >= 40){
//             ans[i++] = 'X';
//             ans[i++] = 'L';
//             num -= 40;
//         }else if(num >= 10){
//             ans[i++] = 'X';
//             num -= 10;
//         }else if(num >= 9){
//             ans[i++] = 'I';
//             ans[i++] = 'X';
//             num -= 9;
//         }else if(num >= 5){
//             ans[i++] = 'V';
//             num -= 5;
//         }else if(num >= 4){
//             ans[i++] = 'I';
//             ans[i++] = 'V';
//             num -= 4;
//         }else{
//             ans[i++] = 'I';
//             num -= 1;
//         }
//     }
//     ans[i] = '\0';
//     return ans;
// }

int main(){
    printf("%s\n", intToRoman(3));
    printf("%s\n", intToRoman(4));
    printf("%s\n", intToRoman(9));
    printf("%s\n", intToRoman(58));
    printf("%s\n", intToRoman(1994));
    return 0;
}