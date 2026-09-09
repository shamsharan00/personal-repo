/*
bubble sort will swap with the adjacent element and push the largest element
to the end of the array in each iteration. The process is repeated for the 
remaining unsorted elements until the entire array is sorted.
*/

#include<stdio.h>
int main() { 
    int n, i, j, temp;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    
    //Bubble Sort Algorithm
    for (i=0;i <n; i++) {
        for (j=0;j <n-i-1;j++) {
            if (arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}
