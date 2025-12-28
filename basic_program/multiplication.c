/*
Program for multiplication table
Given a number n, we need to print its table. 

Examples : 

Input:  5
Output: 
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
*/

#include<stdio.h>
int main() {
    int number = 0, i = 0, limit =0;
    multi:
    printf("Enter the number to show the multiplication Table: \n");
    scanf("%d", &number);
    if (number <= 0) {
        printf("please enter the valid number greater than 0 \n");
        goto multi;
    }
    check: // suggested by GPT if(scanf(%d",limit)!=1)) this to check valid input 
    printf("Enter the limit upto which we have to print the Table: \n");
    scanf("%d", &limit);
    if (limit <= 0) {
        printf("please enter the valid number greater than 0 \n");
        goto check;
    }
    printf(" printing the Multiplication Table of %d \n",number);
    for (i = 1; i <= limit ; i++) {
        printf("%d * %d = %d \n", number ,i , number * i);
    }
}