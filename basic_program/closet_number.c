/*
Find Closest to n and Divisible by m

Given two integers n and m (m != 0). Find the number closest to n and divisible by m. If there is more than one such number, then output the one having maximum absolute value.

Examples: 

Input: n = 13, m = 4
Output: 12
Explanation: 12 is the closest to 13, divisible by 4.

*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int closet(int n, int m);
int main() {
    int n, m;
    printf("Enter the value to find the closet number :\n");
    scanf("%d %d", &n, &m);
    printf("The closet number of %d and divisible by %d is : %d \n", n, m, closet(n, m));
}

int  closet(int n, int m) {
    int q, n1, n2;
    q = n / m;
    n1 = m * q;
    n2 = (m * n) > 0 ? m * (q + 1) : m * (q - 1);
    if ( abs(n - n1) < abs(n - n2)) 
        return n1;
    return n2;
}