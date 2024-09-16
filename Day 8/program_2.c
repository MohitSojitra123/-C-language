#include<stdio.h>

int main(){

   int user,count=1;

   printf("Enter Any Number...");
   scanf("%d",&user);

   for(int i=1; i<=user; i++){
     count=count*i;
   }

   printf("%d ",count);

}