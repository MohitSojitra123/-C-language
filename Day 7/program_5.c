#include<stdio.h>

int main(){

  int start,end;

  printf("Enter Star Year...\n");
  scanf("%d",&start);

  printf("Enter End Year....\n");
  scanf("%d",&end);

  for(start; start<=end; start++){

     if((start%4==0) || (start%400==0 && start%100!=0)){
        printf("%d ",start);
     }

  }

}