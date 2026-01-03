/*
Swap Two Numbers

Given two numbers a and b, the task is to swap them.

Examples:

Input: a = 2, b = 3
Output: a = 3, b = 2
*/

#include<stdio.h>
void swap (int *x, int *y);

int main() {
    int a , b;
    printf("Enter the number to be swapped : ");
    scanf("%d %d", &a, &b);
    printf("Before swapping a = %d , b = %d\n", a, b);
    //calling the swap function to swap the numbers 
    swap(&a, &b);
    printf("After swapping the number a = %d, b = %d\n", a, b);
}

void swap (int *x, int *y) {
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
    return 0;
}