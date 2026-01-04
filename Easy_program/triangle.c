/*
Check whether triangle is valid or not if sides are given

Given three sides, check whether triangle is valid or not. 

Examples:  

Input :  a = 7, b = 10, c = 5 
Output : Valid
We can draw a triangle with the given three edge lengths.
*/

#include <stdio.h>

int is_triangle(int a, int b, int c) {
    if(  (a + b <= c) || (b + c <= a) || (c + a <= b) )
        return 0;
    return 1;
}

int main() {
    int a, b, c;
    printf("Enter the three sides of the triangle :\n");
    scanf("%d %d %d", &a, &b, &c);
    if (is_triangle(a, b, c)) 
        printf("Valid triangle with sides %d, %d, %d \n", a, b, c);
    else
        printf("Invalid triangle with sides %d, %d, %d\n", a, b, c);
}