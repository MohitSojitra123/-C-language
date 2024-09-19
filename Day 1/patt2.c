#include<stdio.h>

int main(){

      
   int row,col;

   printf("Enter Value Of Row...");
   scanf("%d",&row);

   printf("Enter Value Of Col..");
   scanf("%d",&col);

    int col2=col;

   for(row=col2; row>=1; row--){
       for(col=row; col<=col2; col++){
          printf("%d ",col);
       }  
         printf("\n");
   }

}
