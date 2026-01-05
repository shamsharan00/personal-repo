/*
Program for Armstrong Numbers

Given a number x, determine whether the given number is Armstrong's number or not. A positive integer of n digits is called an Armstrong number of order n (order is the number of digits) if

abcd... = pow(a,n) + pow(b,n) + pow(c,n) + pow(d,n) + ....

Here a, b, c and d are digits of input number abcd.....

Examples

Input: n = 153
Output: true
Explanation: 153 is an Armstrong number, 1*1*1 + 5*5*5 + 3*3*3 = 153

Input: n = 9474
Output: true
Explanation: 94 + 44 + 74 + 44 = 6561 + 256 + 2401 + 256 = 9474

Input: n = 123
Output: false
Explanation: 1³ + 2³ + 3³ = 1 + 8 + 27 = 36
*/

#include <stdio.h>
#include <math.h>

int arm(int n) {
    int original = n, sum = 0, i;

    for (i = 0; n != 0; i++)
        n /= 10;
    
    n = original;
    int len = i;

    for (i = 0; n != 0; i++) {
        sum += pow(n%10, len);
        n /= 10;
    }
    printf("The sum of the digits raised to the power %d is : %d \n", len, sum);
    return (sum == original) ? 1 : 0;
}
int main() {
    int n;
    printf("Enter the number to check Armstrong number: \n");
    scanf("%d", &n);
    printf("The number %d is %sArmstrong number \n", n, arm(n) ? "" : "not ");
}