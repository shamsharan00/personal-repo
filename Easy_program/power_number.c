/*
Check if a number is a power of another number

Given two positive numbers x and y, check if y is a power of x or not.
Examples : 

Input:  x = 10, y = 1
Output: True
x^0 = 1
*/

#include <stdio.h>
#include <math.h>

int is_power(int x, int y) {
    double res1 = log(y) / log(x);
    return res1 == floor(res1);
}
int main() {
    int x, y;
    printf("Enter the base number (x) and the number to check (y): \n");
    scanf("%d %d", &x, &y);

    if (is_power(x, y))
        printf("True base %d check %d \n", x, y);
    else
        printf("False base %d check %d\n", x, y);
}