#include<stdio.h>
int main() {
    int n; 
    printf("enter the size of tthe array element :");
    scanf("%d", &n);

    int arr[n],i,j,k,temp;
    printf("\nenter the value for array element:");
    for (i=0; i<n;i++)
        scanf("%d", &arr[i]);

    printf("\n");

    /*insertion sort is based on the idea of inserting each element into its correct position */
    for (i=1; i<n; i++) {
        temp = arr[i];
        j = i - 1; 
        while (j>=0 && arr[j]>temp) {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
        for (k=0; k<n;k++)
            printf("%d", arr[k]);
        printf("\n");
    }
       for (k=0; k<n;k++)
            printf("%d", arr[k]);

}