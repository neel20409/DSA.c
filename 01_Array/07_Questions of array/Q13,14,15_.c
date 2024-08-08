#include<stdio.h>

void display(int arr[],int size){
    for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

void insertion(int arr[],int size,int pos,int element){
    if(pos>size){
       printf("Invalid postion!!");
    }
    else{
        for (int i = size; i >=pos; i--)
        {
            arr[i+1]=arr[i];
        }
        arr[pos]=element;
    }

}
int main(){
 int arr[100];
    int size, pos, element;

    printf("\nEnter size of array :- ");
    scanf("%d",&size);

    for(int i=0;i<size;i++){
        printf("\nEnter %dth element : ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter elment you want to insert:-");
    scanf("%d",&element);

    printf("\n Enter index at which you want to index:-");
    scanf("%d",&pos);


    printf("\nOriginal Array before insertion\n");
    display(arr,size);

    insertion(arr,size,pos,element);
    size =size+1;

    printf("\nOriginal Array after insertion :\n");
    display(arr,size);
    return 0;
}