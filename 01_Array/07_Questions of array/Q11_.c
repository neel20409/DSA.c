#include<stdio.h>
float avg(int arr[],int size){
    int sum =0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];

    }
    float avreage= (sum/size);
    return avreage;
}
int main (){
    int arr[100],size;
    printf("Enter size of array: ");
    scanf("%d",&size);
    
    printf("Enter %d element in array !\n",size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d",&arr[i]);
    }
    
   float ans = avg(arr,size);
    printf("Average of arry is : %f \n",ans);

}