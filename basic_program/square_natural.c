/*
Program for Sum of squares of first n natural numbers

Given a positive integer n, we have to find the sum of squares of first n natural numbers. 
Examples : 

Input : n = 2
Output: 5
Explanation: 1^2+2^2 = 5

Input : n = 8
Output: 204
Explanation :  1^2 + 2^2 + 3^2 + 4^2 + 5^2 + 6^2 + 7^2 + 8^2 = 204 
*/


#include<stdio.h>
int main() {
    int number = 0, sum = 0 , i = 0;
    check:
    printf(" Enter the number to sum the square of natural number : \n");
    if( scanf("%d", &number) != 1 || number <=0) {
        //clear the input buffer 
        while ((number = getchar()) != '\n' && number != EOF);
        printf(" enter the valid positive number greater thean 0 \n");
        goto check;
    }
    for (i = 1; i <= number ; i++) {
        sum += i * i;
    }
    printf(" sum of the square of natural number is %d \n", sum); 

}