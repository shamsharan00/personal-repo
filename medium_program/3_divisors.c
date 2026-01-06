/*
Count numbers with exactly 3 divisors

Given a number n, print count of numbers in the range from 1 to n having exactly 3 divisors. 

Examples: 

Input: n = 16
Output: 2
Explanation: Only 4 and 9 have exactly three divisors.

Input: n = 100
Output: 4
Explanation: 4, 9, 25 and 49 have exactly three divisors.
*/

#include <stdio.h>

int prime( int n) {
    if ( n <= 1) 
        return 0;

    for (int i = 2; i < n; i++) {
            if( n % i == 0)
                return 0;
    }
    return 1;
}

int divisors(int n) {
    int count =0;
    for (int i = 2; i * i <= n; i++) {
        if (prime(i)) {
            count ++;
            printf("Number with exactly 3 divisors is : %d \n", i * i);
        }
    }
    return count ;
}
int main() {
    int n;
    printf("Enter the number to count numbers with exactly 3 divisors: \n");
    scanf("%d", &n);
    printf("The count of numbers with exactly 3 divisors from 1 to %d is : %d \n", n, divisors(n));
}