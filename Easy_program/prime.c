/*
Introduction to Primality Test and School Method

Given a positive integer, check if the number is prime or not. A prime is a natural number greater than 1 that has no positive divisors other than 1 and itself. Examples of the first few prime numbers are {2, 3, 5, ...}
Examples : 

Input:  n = 11
Output: true
*/

#include <stdio.h>

int prime( int n) {
    if ( n<= 1) 
        return 0;

    for (int i = 2; i < n; i++) {
            if( n % i == 0)
                return 0;
    }
    return 1;
}

int main() {
    int n, i = 0;
    printf("Enter the number of to check prime or not \n");
    scanf("%d", &n);

    if ( prime(n) )
        printf("%d is a prime number\n", n);
    else
        printf("%d is not a prime number\n", n);
}