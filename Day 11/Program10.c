#include<stdio.h>

//         1 
//       1 2 1 
//     1 2 3 2 1 
//   1 2 3 4 3 2 1 
// 1 2 3 4 5 4 3 2 1           


int main(){

 for (int row = 1; row <= 5; row++)
    {
        for (int  space = 4; space >= row; space--)
        {
    printf("  ");

        }
           for (int col = 1; col <= row; col++)
            {
                printf("%d ",col);
            }
            for (int col2 = row-1; col2 >=1; col2--)
            {
                printf("%d ",col2);

            }
            
                printf("\n");

    }
  

}