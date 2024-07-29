#include<stdio.h>

int main(){
    // int arr =18 ;
    // int *ptr = &arr;

    // printf("addres of arr : %p\n",&arr);
    // printf("value of arr : %d\n",arr);
    // printf("address of arr : %p\n",ptr);
    // printf("value of arr : %d\n",*ptr);
    // printf("address at stored address of arr  : %p\n",&(ptr));
    // printf(" address of arr  : %p\n",&(*ptr));


    int arr[5]={1,2,3,4,5};
    int *ptr;
    ptr=arr;
    // printf("address of first element%p\n",arr);
    printf("address of first element%p\n",ptr);
    // printf("address of first element%p\n",&arr[0]);
    printf("value of first element %d\n",*ptr);
    // printf("value of first element %d\n",arr[0]);
    ptr++;
    printf("value of second element:%d",*ptr);
        printf("address of second element%p\n",ptr);
    
    


}