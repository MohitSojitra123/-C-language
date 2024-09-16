#include<stdio.h>

int main(){

   int user;
   printf("Enter Any Number....");
   scanf("%d",&user);

     int i=1;

   do{

    if(i%2==0){
        printf("%d ",i);
    }
        i++;

   }while(i<=user);

}