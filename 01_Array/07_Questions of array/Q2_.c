#include<stdio.h>



    
void print(int arr [],int size){
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",arr[i]);

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
    
    print(arr,size);
}