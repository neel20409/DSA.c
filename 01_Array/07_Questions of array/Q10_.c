#include<stdio.h>
int summation(int arr[],int size){
   int sum = 0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int arr[100],size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %dth element of array: ");
        scanf("%d",&arr[i]);
    }
    int ans = summation(arr,size);
    printf ("Sumation of all the element in array : %d ",ans);
    printf("\n");
    
}