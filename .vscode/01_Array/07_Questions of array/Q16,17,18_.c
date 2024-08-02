#include<stdio.h>
void display(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        printf("\t%d\t",arr[i]);
    
    }
    printf("\n");
}
void deletion(int arr[],int size,int pos){
    if(pos>size){
        printf("Invlaid position!!\n");
    }
    else{
        for (int i = pos; i < size-1; i++)
        {
            arr[i]=arr[i+1];
        }
    }

}
int main(){
 int arr[100],size,pos;

printf("\nEnter size of array : ");
scanf("%d",&size);

for (int i = 0; i < size; i++)
{
    printf("\nEnter %dth element : ",i);
    scanf("%d",&arr[i]);
}

printf("\nEnter index of the element which you want to delete : ");
scanf("%d",&pos);

printf("\nOriginal Array before deletion :-");
display(arr,size);

deletion(arr,size,pos);
size=size-1;

printf("\nArray after deletion :- ");
display(arr,size);


}