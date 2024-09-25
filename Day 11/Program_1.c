#include<stdio.h>

// - - - - 1 
// - - - 2 1 
// - - 3 2 1 
// - 4 3 2 1 
// 5 4 3 2 1 

int main(){

   for(int i=1; i<=5; i++){
       for(int space=1; space<=5-i; space++){
        //    printf("- ");
           printf("  ");
       }
       for(int j=i; j>=1; j--){
        printf("%d ",j);
       }
           printf("\n");
   }

}