#include<stdio.h>

int main(){

// 1 2 3 4 5 
// 1 2 3 4
// 1 2 3
// 1 2
// 1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5


// 1 2 3 4 5 
// 1 2 3 4 -
// 1 2 3 - -
// 1 2 - - -
// 1 - - - -


// 1 - - - - 
// 1 2 - - -
// 1 2 3 - - 
// 1 2 3 4 -
// 1 2 3 4 5


//   1
  for(int i=5; i>=1; i--){
    for(int j=1; j<=i; j++){
        printf("%d ",j);
    }

     for(int space=5; space>i; space--){
         printf("  ");
        // printf("- ");
     }

     printf("\n");
  }
     
    //  2
   
      for(int i=1; i<=5; i++){
      
       for(int j=1; j<=i; j++){
            printf("%d ",j);
        }
         for(int space=i; space<5; space++){
            printf("  ");
            // printf("- ");
         }

   printf("\n");
  }

}
