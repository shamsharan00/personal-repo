/*
Fraction to Recurring Decimal
Last Updated : 11 Jul, 2025
Given two integers a and b(b != 0), the task is to return the fraction a/b in string format. If the fractional part is repeating, enclose the repeating part in parentheses.

Examples: 

Input: a = 1, b = 2
Output: "0.5"
Explanation: 1/2 = 0.5 with no repeating part.

Input: a = 50, b = 22
Output: "2.(27)"
Explanation: 50/22 = 2.27272727... Since fractional part (27) is repeating, it is enclosed in parentheses.
*/


#include <stdio.h>
#include <string.h>

int fact(u_int32_t num, u_int32_t dem, char* result) {
    int n = 0;
    if ( dem == 0 || num == 0) {
        return 0; // Division by zero is undefined
    }
    if ( num < 0 ^ dem < 0) { // check for negative sign
        sprintf(result, "-");
    }
    num = num < 0 ? -num : num; // convert to positive
    dem = dem < 0 ? -dem : dem; // convert to positive
    printf("num: %d, dem: %d\n", num, dem);

    if (num % dem == 0) { // check whether is devisible or not 
        sprintf(result + strlen(result), "%d", num / dem);
        return 1;
    }

    while (num != 0) {
        if (n == 2) {
            sprintf(result + strlen(result), ")");
            break;
        }

        printf("Current num: %d dem: %d\n", num, dem);
        if ( num < dem) {
            n++;
            if (strchr(result, '.') == NULL) {
                sprintf(result + strlen(result), "0.");
                n--;
            }
            num = num * 10;
            sprintf(result + strlen(result), "%d", num / dem);
            num = num % dem; // to get the next remainder to continue the process
            if (num % dem != 0)
                if (strchr(result, '(') == NULL) 
                sprintf(result + strlen(result), "(");
            
            /*if (num > dem) 
                if ((strchr(result, '(') == NULL) && (strchr(result, '.') != NULL) && (n == 0))
                    sprintf(result + strlen(result), "(");*/
        } else {
            n++;
            sprintf(result + strlen(result), "%d", num / dem);
            num = num % dem; // to get the next remainder to continue the process
            if (num < dem) {
                sprintf(result + strlen(result), ".");
                n--;
            }
        }
        if (num == 0) {
            break;
        }
        if (num % dem == 0 ) {
            sprintf(result + strlen(result), ")");
            break;
        }
    }
    char l;
/*    if (result[0] == '-') {
        l = result[3];
        result[3] = result[4];
        result[4] = l;
    } else {
        l = result[2];
        result[2] = result[3];
        result[3] = l;
    }
    */
    if ( strchr(result, '(') == NULL) {
        return 1;
    }
    int i = (result[0] == '-') ? 3 : 2;
    l = result[i];
    result[i] = result[i + 1];
    result[i + 1] = l;

    return 1;
}

int main() {
    int numerator, denominator;
    char result[100];
    printf("Enter numerator and denominator: \n");
    scanf("%d %d", &numerator, &denominator);
    if (fact(numerator, denominator, result) == 0) {
        printf("Invalid input. Denominator cannot be zero.\n");
        return 1;
    } else {
        printf("The fraction in decimal format is: %s\n", result);
    }
    return 0;
}