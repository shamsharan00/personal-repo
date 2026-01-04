/*
Pair Cube Count

Given n, count all 'a' and 'b' that satisfy the condition a^3 + b^3 = n. Where (a, b) and (b, a) are considered two different pairs

Examples: 

Input: n = 9
Output: 2
Explanation: 1^3 + 2^3 = 9 and 2^3 + 1^3 = 9

Input: n = 28
Output: 2
Explanation: 1^3 + 3^3 = 28 and 3^3 + 1^3 = 28
*/

#include <stdio.h>

int cube_count(int n) {
    int a, b, count = 0;
    for(a = 1; a <= n; a++) {
        for(b = 0; b <= n; b++) {
            if((a*a*a) + (b*b*b) == n) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int n;
    printf("Enter the number to find the pair cube \n");
    scanf("%d", &n);
    printf("The pair count is %d \n", cube_count(n));
}