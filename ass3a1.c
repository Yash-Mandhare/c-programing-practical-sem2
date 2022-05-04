#include <string.h>
#include<stdio.h> 
 
int main()
{
   char s1[50],s2[20];  
    int i,len;
     printf("Enter any string: ");
    gets(s1);
    strcpy(s2,s1);
    len=strlen(s2);
    printf("original string s1='%s'\n",s1);
    printf("copied string   s2='%s'\n",s2);
    printf("length of string 2 ='%d'",len);
    return 0;
    
}

/* output:
Enter any string: priyanka khutwad
original string s1='priyanka khutwad'
copied string   s2='priyanka khutwad'
length of string 2 ='16'
*/