#include<stdio.h>


// - - - - 5
// - - - 4 5
// - - 3 4 5
// - 2 3 4 5
// 1 2 3 4 5

int main(){
     
     for(int i=5; i>=1; i--){

       for(int space=i-1; space>=1; space--){
        //    printf("- ");
           printf("  ");
       }

       for(int j=i; j<=5; j++){
          printf("%d ",j);
       }

        printf("\n");
     }
    

}