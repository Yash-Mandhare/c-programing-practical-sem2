#include <string.h>
#include<stdio.h> 
 
int main()
{
   char s1[40],s2[20];
   int len;
 
    printf("Enter  string1: ");
    gets(s1);
    printf("Enter  string2: ");
    gets(s2);
    strcat(s1,s2);
    len=strlen(s1);
    printf("combined two strings ='%s'\n",s1);
    printf("length of string 1 ='%d'",len);
    return 0;
    
}
/*
output:
Enter  string1: priyanka     
Enter  string2: supriya
combined two strings ='priyankasupriya'
length of string 1 ='15'
*/