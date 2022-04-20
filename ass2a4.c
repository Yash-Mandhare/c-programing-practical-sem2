
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, max;
    int *ptr;

   
    printf("Enter total number of elements: ");
    scanf("%d", &max);
    
   
    ptr = (int *) calloc(max, sizeof(int));
    
    
    if(ptr == NULL)
    {
        printf("Memory is not created!!!");
        exit(0); 
    }
    
    
    printf("Enter %d elements: \n", max);
    for (i = 0; i < max; i++)
        scanf("%d", (ptr + i));
    
    
    printf("\nArray elements are:\n");
    for (i = 0; i < max; i++)
        printf("%d ", *(ptr + i));
    
   
    free(ptr);
    
    return 0;
}
