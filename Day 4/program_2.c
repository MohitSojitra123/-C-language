#include<stdio.h>


int main(){


  float HRA,DA,TA,ans,user;

  printf("Enter gross salary...\n");
  scanf("%f",&user);
   
   printf("Enter HRA...\n");
   scanf("%f",&HRA);

   printf("Enter HRA...\n");
   scanf("%f",&DA);

   printf("Enter HRA...\n");
   scanf("%f",&TA);

   HRA=(user*HRA/100);
   DA=(user*DA/100);
   TA=(user*TA/100);

   ans=HRA+DA+TA+user;

   printf("%f",ans);

}