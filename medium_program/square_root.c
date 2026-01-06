/*
Program for Square Root of Integer

Given a positive integer n, find its square root. If n is not a perfect square, then return floor of √n.

Examples : 

Input: n = 4
Output: 2
Explanation: The square root of 4 is 2.

Input: n = 11
Output: 3
Explanation: The square root of 11 lies in between 3 and 4 so floor of the square root is 3.
*/

#include <stdio.h>

int square_root(int n) {
    int i, low = 1, high = n, mid = 0, ans = 0;

    for (i = 1; i <= n; i ++) {
        mid = low + (high - low) / 2;
        if (mid * mid <= n) {
            ans = mid;
            low = mid + 1;
        } else
            high = mid - 1;
    }
    return ans;
}

int main() {
    int n;
    printf("Enter the number to find the square root: \n");
    scanf("%d", &n);
    printf("The square root of %d is : %d \n", n, square_root(n));
}