#include<stdio.h>

void display(int arr[],int size){
    for (int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
}
void deletion(int arr[] ,int size,int index){
    for (int i = index; i < size-1; i++)
    {
        arr[i]=arr[i+1];
    }
    

}

int main(){

    int arr[100];
    int size,index;


printf("\nEnter size of array :- ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("\nEnter %dth element : ",i);
        scanf("%d",&arr[i]);
    }

    printf("Enter index which value you ewnat to delete:-");
    scanf("%d",&index);
printf("\nArray before deletion:\n");
    display(arr,size);

    deletion(arr,size,index);
    size=size-1;
    printf("Array after deletion\n");
    display(arr,size);

}