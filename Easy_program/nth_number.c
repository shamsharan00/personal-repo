/*
Find n-th term of series 1, 3, 6, 10, 15, 21...

Given a number n, find the n-th term in the series 1, 3, 6, 10, 15, 21...

Examples

Input  3
Output 6

Input  4
Output  10
*/

#include <stdio.h>

int main() {
    int n;
    printf("Enter the position to find the nth term of the series: \n");
    scanf("%d", &n);
    printf("The %d th term of the series is : %d \n", n, n * (n + 1) / 2);
}