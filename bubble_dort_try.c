#include<stdio.h>
int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n],i,j,k,temp, flag =0;
    for (i=0; i<n; i++) {
        printf("Enter the value  : ");
        scanf("%d", &arr[i]);
    }

    printf("The unsorted array is: ");
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);

    //Bubble Sort Algorithm
    for(i=0; i<n; i++) {
        flag =0;
        for(j=0; j<n-1; j++) {
            if(arr[j] > arr[j+1]) {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag = 1;
            }

        }
        for (k=0; k<n; k++)
            printf("%d ", arr[k]);
        printf("\n");
        if(flag == 0)
            break;
    }

    printf("\nThe sorted array is: ");
    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
}