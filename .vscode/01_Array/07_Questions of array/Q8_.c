#include<stdio.h>

void findmaxmin(int arr[],int size){
    int maxelement = arr[0];
    int minelement= arr[0];
    for(int i=0;i<size;i++){
        if(arr[i]>maxelement){
            maxelement=arr[i];
        }
        if(arr[i]<minelement){
            minelement=arr[i];
        }

    }
    printf("\nMaxium element %d :",maxelement);
    printf("\nMinimum element %d :",minelement);
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

    findmaxmin(arr,size);
    printf("\n");

}