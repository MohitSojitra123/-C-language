#include<stdio.h>

int main(){

    int array1[]={12,42,18,50,26};

     float array1_sum=0;

     for(int i=0; i<5; i++){
    
       printf("%d \n",array1[i]);
       array1_sum+=array1[i];
     }


   printf("Averange Of...%f",array1_sum/5);
    
    
    return 0;

}