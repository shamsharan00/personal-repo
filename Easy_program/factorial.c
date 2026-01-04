/*

Factorial of a Number
Given the non-negative integers n , compute the factorial of a given number.
Note: Factorial of n is defined as n * (n -1) * (n - 2) * ... * 1, for n = 0, factorial is 1.

Examples:

Input: n = 5
Output: 120
Explanation: 5! = 5 * 4 * 3 * 2 * 1 = 120

Input: n = 4
Output: 24
Explanation: 4! = 4 * 3 * 2 * 1 = 24
*/

#include <stdio.h>

int factorial(int n) {
    int fact = 1;
    while (n > 0) {
        fact = fact * n;
        n--;
    }
    return fact;
}

int main() {
    int n;
    printf("Enter the number to find is it factorial :\n");
    scanf("%d", &n);
    printf("The factorial of %d is %d\n", n, factorial(n));
}