/*
Find day of the week for a given date

Given a date (day, month, year), the task is to determine the day of the week on which that date falls. The function should be able to compute the day for any date in the past or future. The function should return values from 0 to 6 where 0 means Sunday, 1 Monday and so on.

Examples:

Input: d = 30, m = 8, y = 2010
Output: 1
Explanation: 30th August 2010 was a Monday.

Input: d = 15, m = 6, y = 1995
Output: 4
Explanation: 15th June 1995 was a Thursday.

Input: d = 29, m = 2, y = 2016
Output: 1
Explanation: 26th January was a Monday.
*/

#include <stdio.h>
int day( int d, int m, int y) {
    int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};

    y -= m < 3;
    return ((y + y/4 -y/100 + y/400 + t[m - 1] + d) % 7);
}

int main() {
    int d, m , y;
    printf("Enter the date in dd mm yyyy format to find the day :\n");
    scanf("%d %d %d", &d, &m, &y);
    printf("The day of the week is : %d \n",day(d, m, y));
}