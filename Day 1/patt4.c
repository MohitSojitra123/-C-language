#include<stdio.h>

int main(){

    int row,col;

    printf("Enter Row Number...");
    scanf("%d",&row);


    printf("Enter Column Number....");
    scanf("%d",&col);


    int row1=row; 

   for(row=1; row<=col; row++){
       for(int col=row; col<=row1; col++){
           printf("%d",col);
       }
       printf("\n");
   }

}