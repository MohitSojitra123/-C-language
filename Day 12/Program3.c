#include<stdio.h>

int main(){

    int user1,user2;

    printf("Enter Size Of Array1..");
    scanf("%d",&user1);


    int array1[user1];
    int array2[user1];

    for(int i=0; i<user1; i++){

     printf("Enter Value Of Array 1 [%d]",i);
     scanf("%d",&array1[i]);

    }

    printf("\n");
    printf("\n");

    for(int i=0; i<user1; i++){
     printf("Enter Value Of Array 2 [%d]",i);
     scanf("%d",&array2[i]);
    }

   printf("\n");
    printf("\n");

    for(int i=0; i<user1; i++){
          int result=array1[i]+array2[i];
          printf("Array 1 Element [%d] Array 2 Element [%d] And Sum Is... %d \n",array1[i],array2[i],result);

    }



}