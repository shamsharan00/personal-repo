/*
Write a program to reverse digits of a number

Given an Integer n, find the reverse of its digits.

Examples:  

Input: n = 122
Output: 221
Explanation: By reversing the digits of number, number will change into 221.
*/

#include <stdio.h>
int reverse( int n, int rev);
int main() {
    int n = 0, rev = 0;
    printf("enter the number to be reversed :\n");
    scanf("%d",&n);
    printf("Reversed number of %d is %d \n", n, reverse(n, rev));
}

int reverse( int n, int rev) {
    if (n == 0)
        return rev;
    rev = rev * 10;
    rev += (n % 10);
    printf(" rev value = %d\n", rev);
    return reverse(n/10, rev);
}