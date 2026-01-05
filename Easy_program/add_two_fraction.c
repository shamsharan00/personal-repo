/*
Program to add two fractions

Given two integer arrays a[] and b[] containing two integers each representing the numerator and denominator of a fraction respectively. The task is to find the sum of the two fractions and return the numerator and denominator of the result.

Examples : 

Input:  a = [1, 2] , b = [3, 2] 
Output: [2, 1] 
Explanation: 1/2 + 3/2 = 2/1

Input:  a = [1, 3] , b = [3, 9] 
Output: [2, 3] 
Explanation: 1/3 + 3/9 = 2/3   

Input:  a = [1, 5] , b = [3, 15] 
Output: [2, 5] 
Explanation: 1/5 + 3/15 = 2/5   
*/

#include <stdio.h>

int main() {

    int num1, denum1, num2, denum2, gcd, i;
    printf("Enter the numerator and denominator of first fraction: \n");
    scanf("%d %d", &num1, &denum1);
    printf("Enter the numerator and denominator of second fraction: \n");
    scanf("%d %d", &num2, &denum2);

    int numerator = (num1 * denum2) + (num2 * denum1);
    int denominator = denum1 * denum2;

    // Finding the GCD
    for(i = 1;i <= numerator && i<= denominator; ++i)
    {
        if( (numerator % i == 0) && (denominator % i == 0)) {
            gcd = i;
        }
    }
    printf("The (%d/%d), (%d/%d) sum of the two fractions is %d/%d\n", num1, denum1, num2, denum2, numerator/gcd, denominator/gcd);
}