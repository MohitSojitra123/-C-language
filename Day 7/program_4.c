#include<stdio.h>

int main(){
    
    int user;

    printf("Enter Any Number...");
    scanf("%d",&user);

    int i=0;

    while (user>=i)
    {
        if(user%2 != 0){
            printf("%d ",user);
        }
        user--; 
    }   
   return 0;

}