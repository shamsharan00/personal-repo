/*
Program for sum of n natural numbers

Given a positive integer n, find the sum of the first n natural numbers.

Examples : 

Input: n = 3
Output: 6
Explanation: 1 + 2 + 3 = 6

Input: n = 5
Output: 15 
Explanation:  1 + 2 + 3 + 4 + 5 = 15
*/

#include<stdio.h>
int main() {
    int n = 0, sum = 0, i=0;
    check:
    printf("Enter the number to find the sum of natural number: \n");
    if(scanf("%d", &n) !=1 || n <= 0) {
        // clear input buffer to avoid infinite loop
        while ((n = getchar()) != '\n' && n != EOF);
        printf("enter the validate positive number greater then 0 \n");
        goto check;
    }
    printf("Calculating the sum of natural numbers \n");
    for (i = 1; i <= n ; i++) {
        sum = sum + i;
    }
    printf(" sum of the numbers %d \n", sum);
}