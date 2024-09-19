#include<stdio.h>

int main(){

   int row,col;

   printf("Enter Value Of Row...");
   scanf("%d",&row);

   printf("Enter Value Of Col..");
   scanf("%d",&col);


   for(row=1; row<=col; row++){
      for(int col=row; col>=1; col--){
           printf("%d",col);
      }
       printf("\n");
   }

}