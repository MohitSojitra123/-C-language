#include<stdio.h>

int main(){

   int user,v1= -1,v2=1,v3;

   printf("Enter Any Number....");
   scanf("%d",&user);


   for(int i=0; i<=user; i++){
       
       v3=v1+v2;
       printf("%d ",v3);
       v1=v2;
       v2=v3;

   }

}