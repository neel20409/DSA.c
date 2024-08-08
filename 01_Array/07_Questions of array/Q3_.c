#include<stdio.h>



    
void printeven(int arr [],int size){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]%2==0){
        printf("%d\t",arr[i]);}
    }
    
}
int main(){
    int arr[100];

        int size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %dth of array : ",i);
        scanf("%d",&arr[i]);
    }
    
    printeven(arr,size);
    printf("\n");
}