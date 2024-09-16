#include<stdio.h>

int main(){

    int user,count=1;

    printf("Enter Any Number...");
    scanf("%d",&user);

    while (user>=9)
    {
        user=user/10;
        count++;
    }
    
    printf("%d",count);
}