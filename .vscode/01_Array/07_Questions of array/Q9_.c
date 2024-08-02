#include<stdio.h>

int secondlargest(int arr[],int size){
    int largest=arr[0];
    int secondLargest=arr[0];
     for (int i = 1; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    return secondLargest;
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

    int result = secondlargest(arr,size);
    printf("SEcond largest element in array:
    
    
    
    
    
    
    
    
     %d ",result);
}
