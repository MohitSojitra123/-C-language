#include<stdio.h>

int main(){

    int user;

    printf("Enter Any NUmber To Frist Digit And Last Digit Sum...");
    scanf("%d",&user);

     int last_digit=user%10;

    while (user>=9)
    {
       user=user/10;
    }
     
     printf("Sum Of Frist Digit %d And Last Digit %d ....%d",user,last_digit,(user+last_digit));
}