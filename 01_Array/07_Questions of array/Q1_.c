#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5,6};
    //we can print it in two ways
    //1 using printf statement and index
    // printf("%d\t",arr[0]);
    // printf("%d\t",arr[1]);
    // printf("%d\t",arr[2]);
    // printf("%d\t",arr[3]);
    // printf("%d\t",arr[4]);
    // printf("%d\t",arr[5]);
    // printf("%d\t",arr[6]);

    //2 using loop
    for(int i =0;i<6;i++){
        printf("%d\t",arr[i]);
    }

}