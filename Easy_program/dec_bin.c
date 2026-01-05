/*
Decimal to Binary Conversion Program

Given a non negative number n, the task is to convert the given number into an equivalent binary representation.

Examples: 

Input: n = 12
Output: "1100"
Explanation: the binary representation of 12 is "1100", since 12 = 1×23 + 1×22 + 0×21+ 0×20 = 12

Input: n = 33
Output: "100001"
Explanation: the binary representation of 33 is "100001", since  1×25 + 0×24 + 0×23 + 0×22 + 0×21 + 1×20  = 33
*/

#include<stdio.h>
#include <math.h>
#include <stdlib.h>

int dec_bin(int n) {
    char binary[256], temp;
    int i, len = 0, mid;

    for( i = 0; i <= 255; i++) {
        if(n == 0) break;

        if(n % 2 == 0) binary[i] = '0';
        else binary[i] = '1';
        len ++ ;
        n /= 2;
    }

    for( i = 0; i < mid; i++) {
        temp = binary[i];
        binary[i] = binary[len - i - 1];
        binary[len - i - 1] = temp;
    }
    return atoi(binary);
}

int main() {
    int n;
    printf("Enter the number to convert to binary: \n");
    scanf("%d", &n);
    printf("The binary representation of %d is %d \n",n , dec_bin(n));
}