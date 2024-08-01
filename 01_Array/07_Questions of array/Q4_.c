#include<stdio.h>

int main(){
    int arr[100];
    int size;
    int *ptr;
    ptr=arr;
    printf("Enter size of array: ");
    scanf("%d",&size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter Element %dth of array : ",i);
        scanf("%d",&arr[i]);
    }

//    printf ("BAse address : %p\n",ptr);
//     printf("\nvalue of 1st : %d",*ptr);
//     ptr++;
//     printf("\nsecond adderss:%p",ptr);
    
//     ptr++;

    
    for(int i=0;i<size;i++){
        printf("\naddress of %dth element:%p",i,ptr);
        printf("\nvalue of %dth element:%d",i,*ptr);
        ptr++;
    }
    printf("\n");
}