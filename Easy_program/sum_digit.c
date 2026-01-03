/*

Sum of Digits of a Number

Given a number n, find the sum of its digits.

Examples : 

Input: n = 687
Output: 21
Explanation: The sum of its digits are: 6 + 8 + 7 = 21

*/

#include <stdio.h>
int sum_digit(int n);
int main() {
    int n, sum = 0;
    printf("Enter the number to find sum of digits:\n");
    scanf("%d",&n);
    sum = sum_digit(n);
    printf("The sum of digit of %d is %d \n", n, sum);
}

int sum_digit(int n) {
    if (n == 0)
        return 0;
    
    return (n%10) + (sum_digit(n/10));
}