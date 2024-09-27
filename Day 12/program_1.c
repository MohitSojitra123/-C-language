#include<stdio.h>

int main(){

//     int array1[]={10,20,30,40,50};

//    int size1=sizeof(array1);

//    printf("%d",size1);
    
  int user;
  printf("Enter Size Of Array...");
  scanf("%d",&user);

  int array1[user];

  for(int i=0; i<user; i++){
    printf("Enter Array Element..array [%d] \n",i);
    scanf("%d",&array1[i]);
  }


}