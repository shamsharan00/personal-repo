/*
Find if two rectangles overlap

Given two rectangles, find if the given two rectangles overlap or not.
Note that a rectangle can be represented by two coordinates, top left and bottom right. So mainly we are given following four coordinates. 
l1: Top Left coordinate of first rectangle. 
r1: Bottom Right coordinate of first rectangle. 
l2: Top Left coordinate of second rectangle. 
r2: Bottom Right coordinate of second rectangle.

Examples:

Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { 5, 5 }, r2 = { 15, 0 }
Output: Rectangles Overlap

Input: l1 = { 0, 10 }, r1 = { 10, 0 }, l2 = { -10, 5 }, r2 = { -1, 0 }
Output: Rectangles Don't Overlap
*/

#include <stdio.h>

struct point {
    int x;
    int y;
} ;

int overlap( struct point l1, struct point r1, struct point l2, struct point r2) {
    if (l1.x > r2.x || l2.x > r1.x)
        return 0;
    if (r1.y > l2.y || r2.y > l1.y)
        return 0;
    return 1;
}

int main() {
    struct point l1, r1, l2, r2;
    printf("Enter the coordinates of first rectangle (top-left and bottom-right): \n");
    printf("Top-left (x y): ");
    scanf("%d %d", &l1.x, &l1.y);
    printf("Bottom-right (x y): ");
    scanf("%d %d", &r1.x, &r1.y);

    printf("Enter the coordinates of second rectangle (top-left and bottom-right): \n");
    printf("Top-left (x y): ");
    scanf("%d %d", &l2.x, &l2.y);
    printf("Bottom-right (x y): ");
    scanf("%d %d", &r2.x, &r2.y);

    if (overlap(l1, r1, l2, r2))
        printf("Rectangles Overlap\n");
    else
        printf("Rectangles Don't Overlap\n");

    return 0;
}