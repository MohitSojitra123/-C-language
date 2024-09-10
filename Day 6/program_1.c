#include<stdio.h>


int main(){

  int a,b,c;

  printf("Enter Value a..");
  scanf("%d",&a);

  printf("Enter Value b..");
  scanf("%d",&b);

  printf("Enter Value c...");
  scanf("%d",&c);

  (a>b && a>c) ? printf("a Is Big....%d",&a) : (b>a && b>c) ? printf("b Is Big...%d",b) : (c>a && c>b) ? printf("c Is Big%c",c): printf("");

}