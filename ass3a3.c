#include <string.h>
#include<stdio.h> 
 
int main()
{
   char s1[40], *pos;
   char ch;
   
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  character to search: ");
    scanf("%c",&ch);
     pos = strchr(s1, ch);      
     if ( pos == NULL )          
        printf("The character %c was not found.", ch);      
    else          
        printf("The character %c was found at position %d.\n", ch, pos-s1);      
    return 0; 
    
}