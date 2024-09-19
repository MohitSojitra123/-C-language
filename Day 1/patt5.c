#include<stdio.h>

int main(){

      int row,col;

   printf("Enter Value Of Row...");
   scanf("%d",&row);

   printf("Enter Value Of Col..");
   scanf("%d",&col);


   for(int i=1; i<=row; i++){
     for(int col=row; col>=i; col--){
        printf("%d",i);
     }
       printf("\n"); 
   }

}