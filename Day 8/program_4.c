#include<stdio.h>

int main(){
    
    int user;

    printf("Enter Number To Skip Alphabet...");
    scanf("%d\n",&user);

    for(int  i=65; i<=90; i+=user){
        printf("%c ",i);
    }

}