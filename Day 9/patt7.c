#include<stdio.h>

// 65 to 69

int main(){

   for(int i=65; i<=69; i++){
      for(int j=i; j>=65; j--){
           printf("%c",j);
      }
      printf("\n");
   }

}