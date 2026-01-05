/*
Nth Fibonacci Number

Given a positive integer n, the task is to find the nth Fibonacci number.

The Fibonacci sequence is a sequence where the next term is the sum of the previous two terms. The first two terms of the Fibonacci sequence are 0 followed by 1. The Fibonacci sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21

Example:

Input: n = 2
Output: 1 
Explanation: 1 is the 2nd number of Fibonacci series.

Input: n = 5
Output: 5
Explanation: 5 is the 5th number of Fibonacci series.
*/

#include <stdio.h>

int fibo (int n) {
    int i = 0;
    int dp[n + 1];

    dp[0] = 0;
    dp[1] = 1;

    for (i = 2; i <= n; i++) {
        dp[i] = dp[i - 1] + dp[i - 2];
    }
    return dp[n];
}

int main() {
    int n;
    printf("Enter the position to find the fibonacci number: \n");
    scanf("%d", &n);
    printf("The %d th Fibonacci number is : %d \n", n, fibo(n));
}