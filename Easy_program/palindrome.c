/**/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isPalindrome(int n) {
    int reverse = 0;
  
    // Copy of the original number so that the original
    // number remains unchanged while finding the reverse
    int temp = abs(n);
    while (temp != 0) {
        reverse = (reverse * 10) + (temp % 10);
        temp = temp / 10;
    }
    
    // If reverse is equal to the original number,
    // the number is palindrome
    return (reverse == abs(n));
}

int main() {
    int n ;
    printf("Enter the number to check palindrome: \n");
    scanf("%d", &n);

    if (isPalindrome(n) == 1)
        printf("%d is the palindrome number \n", n);
    else
        printf("%d is not the palindrome number \n", n);

    return 0;
}