#include <stdio.h>
//basic array implementation using loops 1D array

int main(){
    // int a[5]={1,2,3,4,5};

//    printf("%d\t",a[0]); 
//    printf("%d\t",a[1]); 
//    printf("%d\t",a[2]); 
//    printf("%d\t",a[3]); 
//    printf("%d\t",a[4]); 
//    printf("%d\t",a[5]);
int a[100],n;
printf("Enter num of element you want in array: ");
scanf("%d",&n);


for(int i=0;i<=n;i++){
    printf("Enter your %d element here: ",i);
    scanf("%d",&a[i]);
}
printf("your array is : ");
for(int i=0;i<=n;i++){
    printf("%d\t",a[i]);
}
printf("\n");
}
 