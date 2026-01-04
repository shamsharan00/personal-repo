/*
Program to find LCM of two numbers

Given two positive integers a and b. Find the Least Common Multiple (LCM) of a and b.
LCM of two numbers is the smallest number which can be divided by both numbers. 

Input :  a = 10, b = 5
Output :  10
Explanation : 10 is the smallest number divisible by both 10 and 5

Input :  a = 5, b = 11
Output :  55
Explanation : 55 is the smallest number divisible by both 5 and 11
*/

#include <stdio.h>

int gcd(int a, int b) { // function to find the gcd of two numbers
    int i = 1, gcd = 1;
    for(i = 1;i <=( a < b ? a : b); i++) {
        if(a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }
    return gcd;
}

int lcm(int a, int b) { // function to find the lcm of two numbers
    return (a / gcd(a, b)) * b;
}

int main() {
    int a, b;
    printf("Enter the two numbers to find the LCM :\n");
    scanf("%d %d", &a, &b);
    printf("The LCM of tewo numbers %d %d is %d \n", a, b, lcm(a, b));
}