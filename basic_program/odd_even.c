/*
Given a number n, check whether it is even or odd. Return true for even and false for odd.

Examples: 

Input: n = 15
Output: false
Explanation: 15 % 2 = 1, so 15 is odd .

Input: n = 44
Output: true
Explanation: 44 % 2 = 0, so 44 is even.
*/

#include<stdio.h>
int main() {
    int number;
    printf("Enter the number to check odd or even: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("The given number %d is EVEN \n",number);
    } else {
        printf("The given number %d is ODD \n",number);
    }
}
