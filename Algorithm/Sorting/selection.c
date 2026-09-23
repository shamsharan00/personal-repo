#include<stdio.h>
int main() {
    int n; 
    printf("enter the size of tthe array element :");
    scanf("%d", &n);

    int arr[n],i,j,k,temp;
    printf("\nenter the value for array element:");
    for (i=0; i<n;i++)
        scanf("%d", &arr[i]);
    int min=0;
    for (i=0;i<n-1; i++){
        min=i;
        for(j=i+1; j<n;j++) {
            if(arr[j] <arr[min]){
                min=j;
            }
        }
        if(min!=j) {
                temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }
        for (k=0; k<n;k++)
        printf("%d", arr[k]);
        printf("\n");
    }
}