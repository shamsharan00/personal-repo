/*
Nth term of AP from First Two Terms

Given two integers a1 and a2, the first and second terms of an Arithmetic Series respectively, the problem is to find the nth term of the series. 
Examples :

Input : a1 = 2,  a2 = 3,  n = 4
Output : 5
Explanation : The series is 2, 3, 4, 5, 6, ....   , thus the 4th term is 5.
*/

#include <stdio.h>

int main(void) {
    int a1, a2, n;
    printf("Enter the numbers a1, a2 and n to find the nth term of AP series: \n");
    scanf("%d %d %d", &a1, &a2, &n);
    printf("The %dth term of the AP series is : %d\n", n, a1 + (n - 1) * (a2 - a1));
    return 0;
}