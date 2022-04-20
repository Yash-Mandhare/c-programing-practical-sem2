#include <stdio.h>
#include <stdlib.h> 

int main() {
   int row = 3, col = 3,sum=0,val;
   int *arr = (int *)malloc(row * col * sizeof(int)); 
   int i, j;
 printf("Enter The matrix elements:\n");
   for (i = 0; i < row; i++)
      {
        for (j = 0; j < col; j++)
        {
            scanf("%d",(arr + i*col + j));
        }
      }
   printf("The matrix elements are:\n");
   for (i = 0; i < row; i++) {
      for (j = 0; j < col; j++) {
         printf("%d ", *(arr + i*col + j)); 
      }
      printf("\n");
   }
   
  for (i = 0; i < row; ++i)
    {
      sum = sum + *(arr + i*col + i);
    }

  printf ("Trace of the matrix is = %d\n", sum);
  free(arr); 
   return 0;
}