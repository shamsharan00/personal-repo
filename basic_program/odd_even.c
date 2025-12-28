#include<stdio.h>
int main() {
    int number;
    printf("Enter the number to check odd or even: ");
    scanf("%d", &number);
    if (number % 2 == 0) {
        printf("The given number %d is EVEN \n",number);
    } else {
        printf("The given number %d is ODD \n",number);
    }
}
