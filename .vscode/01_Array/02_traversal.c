#include<stdio.h>

void display(int arr[],int n){
// traversal
    for(int i=0;i<=n;i++){

        printf("%d\t",arr[i]);
    }
 printf("\n");
}
int main(){
    int arr[100];int n;
    printf("Enter number of element you want in Array:- ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        printf("enter %dth element here:- ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nYour desire Array is here\n ");
    display(arr,n);
}
