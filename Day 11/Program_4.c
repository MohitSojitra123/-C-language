#include<stdio.h>

// 1 0 1 0 1
// - 0 1 0 1
// - - 1 0 1
// - - - 0 1
// - - - - 1


int main(){

for(int i=5; i>=1; i--){
    for(int space=i; space<5; space++){
        printf("- ");
    }
    for(int j=i; j>=1; j--){
        if(j%2==0){
            printf("0 ");
        }else{
            printf("1 ");
        }
    }
    printf("\n");
}


}