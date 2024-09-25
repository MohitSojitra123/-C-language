#include<stdio.h>

// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4     4 3 2 1
// 1 2 3         3 2 1
// 1 2             2 1
// 1                 1

// 1 2 3  4 5 
// 1 2 3 4 -
// 1 2 3 - - 
// 1 2 - - -   
// 1 - - - -


// 5 4 3 2 1
// - 4 3 2 1
// - - 3 2 1
// - - - 2 1
// - - - - 1


int main(){
    

  for(int i=5; i>=1; i--){
    
    for(int j=1; j<=i; j++){
        printf("%d ",j);
    }

     for(int space=5; space>i; space--){
         printf("  ");
        // printf("- ");
     }

       for(int space=i; space<5; space++){
         printf("  ");
        //  printf("- ");
       }
    
        for(int j=i; j>=1; j--){
            printf("%d ", j);
        }


    printf("\n");
  }


}