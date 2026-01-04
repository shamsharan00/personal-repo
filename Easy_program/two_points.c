/*
Program to calculate distance between two points

You are given two coordinates (x1, y1) and (x2, y2) of a two-dimensional graph. Find the distance between them.

Examples: 

Input : x1, y1 = (3, 4)
           x2, y2 = (7, 7)
Output : 5
*/

#include <stdio.h>
#include <math.h>

int main() {
    int x1, y1, x2, y2;
    printf("Enter the Coordinates (x1, y1) and (x2, y2): \n");
    scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
    double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
    printf("The distance between points (%d, %d) and (%d, %d) is %.2f \n", x1, y1, x2, y2, distance);
}