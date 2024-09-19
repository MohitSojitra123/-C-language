#include<stdio.h>

int main(){

    int row,col;

   printf("Enter Value Of Row...");
   scanf("%d",&row);

   printf("Enter Value Of Col..");
   scanf("%d",&col);
  
    // for(int i=5; i>=1; i--){
    //        for(int j=5; j>=i; j--){
    //           printf("%d",i);
    //        }
    //        printf("\n");
    // }
 
    int row1=row;


    for( row; row>=1; row--){
           for(col=row1; col>=row; col--){
              printf("%d",row);
           }
           printf("\n");
    }

    

}