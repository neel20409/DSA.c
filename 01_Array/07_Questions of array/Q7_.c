#include<stdio.h>
//function that transverse around all element
void size_of_array(int arr[],int size){
        printf("Elements of array are :- ");
    for (int i = 0; i < size; i++)
    {
        printf("\nElement %d : %d\t",i,arr[i]);
       
    }
    printf("\nSize of array : %d",size);
    
}
int main(){
    int arr[100],size;
printf("Enter size of array: ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %dth of array : ",i);
        scanf("%d",&arr[i]);
    }

    size_of_array(arr,size);
    printf("\n");

}