#include<stdio.h>

int main()
{
    int a,b;
    printf("This is a program for comapring 2 numbers which is minimum\n");
    printf("\n");
    printf("\n");
    printf("Please enter the First value  ");
    scanf("%d",&a);
    printf("Please enter the Second value  ");
    scanf("%d",&b);
    
    if (a<b)
    {
        printf("minimum value is :%d",a);
    }
    else{
        printf("minimum value is :%d",b);
        
    }
    
}