#include<stdio.h>

int main()
{
    float a,b,c,formula;
    printf("This is a program for Getting Average of the marks of 3 subjects\n");
    printf("given value should be in range of 100\n");
    printf("\n");
    printf("\n");
    printf("Please enter the Maths Marks ");
    scanf("%f",&a);
    printf("Please enter the English Marks ");
    scanf("%f",&b);
    printf("Please enter the Science Marks ");
    scanf("%f",&c);
    
    formula = a/3 +b/3 +c/3;
    
    if(a<100 && b<100 && c<100 && a>0 && b>0 && c>0 )
    {
        printf("The Average of marks is %f",formula);
    }
    else{
        printf("Please enter the valid values");
    }
    
}