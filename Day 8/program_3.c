#include<stdio.h>


int main(){

    int user;

    printf("Enter Any Number....");
    scanf("%d",&user);

    for(int i=1; i<=10; i++){
         printf("%d X %d = %d\n",user,i,user*i);
    }

}