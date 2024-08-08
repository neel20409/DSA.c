#include<stdio.h>
int search(int arr[],int size,int element){
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==element){
            return i;
        }
    }
    return -1;
    
}
int main(){
    int arr[100],size,element;
     printf("Enter the number of elements: ");
    scanf("%d", &size);

    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    
    printf("Enter the item you want to search for: ");
    scanf("%d", &element);
    int result = search(arr,size,element);
    printf("Your desired element is on: %dth index!!",result);
    printf("\n");
}