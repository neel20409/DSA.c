#include<stdio.h>
// void print2d(int arr[][] ,int rows,int coloum){
//   for (int i=0;i<rows;i++){
//     for(int j=0;j<coloum;j++){
//         printf("%d\t",arr[i][j]);
//     }
//     printf("\n");
//   }


int main(){
 int arr[2][3],i,j;

 printf("Enter the element: ");
 for(i=0;i<2;i++){
  for(j=0;j<3;j++){
    scanf("%d",&arr[i][j]);
  }
 }

 for(i=0;i<2;i++){
  for(j=0;j<3;j++){
    printf("%d\t",arr[i][j]);
  }
  printf("\n");
 }
}