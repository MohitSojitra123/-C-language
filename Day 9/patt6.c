#include<stdio.h>

int main(){

 for(int i=5; i>=1; i--){
    
      for(int j=0; j<i; j++){

         if(j%2!=0){
            printf("0");
         }else{
           printf("1");
         }

      }
       printf("\n");
 }

}