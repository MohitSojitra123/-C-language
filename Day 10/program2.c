#include<stdio.h>

int main()
{
    int a;
    printf("This is a program for checking if number is neutral or not\n");
    printf("\n");
    printf("\n");
    printf("Please enter any number  ");
    scanf("%d",&a);
 
    if (a>0)
    {
        printf("This number is Positive");
    }
    else if (a == 0)
    {
        printf("This number is Neutral");
        
    }
    
    else{
        printf("This number is Negative");
      
        
    }
    
}