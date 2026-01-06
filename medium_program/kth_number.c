/*
K-th digit in 'a' raised to power 'b'

Given three numbers a, b and k, find k-th digit in ab from right side

Examples: 

Input : a = 3, b = 3, k = 1
Output : 7
Explanation: 3^3 = 27 for k = 1. First digit is 7 in 27

Input : a = 5, b = 2,  k = 2
Output : 2
Explanation: 5^2 = 25 for k = 2. First digit is 2 in 25
*/

#include <stdio.h>

int main() {
    int a, b, k, i;
    
    printf("Enter the numbers a, b and k to find the kth digit in a^b: \n");
    scanf("%d %d %d", &a, &b, &k);
    int sum = a;
    for( i = 1; i < b; i++)
        sum = a * sum;
    printf("The value of %d raised to power %d is : %d \n", a, b, sum);
    for( i = 1; i < k; i++)
        sum = sum / 10;
    printf("The %d th digit in %d^%d from right side is : %d \n", k, a, b, sum % 10);
}