/*
Perfect Number

A number is a perfect number if it is equal to the sum of its proper divisors, that is, the sum of its positive divisors excluding the number itself. Find whether a given positive integer n is perfect or not.
Examples: 

Input: n = 15
Output: false
Explanation: Divisors of 15 are 1, 3 and 5. Sum of divisors is 9 which is not equal to 15.

Input: n = 6
Output: true
Explanation: Divisors of 6 are 1, 2 and 3. Sum of divisors is 6.
*/

#include <stdio.h>

int perfect(int n) { // find perfect number
    int sum = 1, i;
    for (i = 2; (i * i)<= n; i++) {
        if (n % i == 0) {
            if (i * i != n)
                sum +=i + n/i;
            else
                sum += i;
        }
    }
    if (sum == n && n != 1)
        return 1;
    
    return 0;
}

int main() {
    int n;
    printf("Enter the number to check the perfect or not :\n");
    scanf("%d", &n);
    if( perfect(n))
        printf("%d is a perfect number \n", n);
    else
        printf("%d is not a perfect number\n", n);
}