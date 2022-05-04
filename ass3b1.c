#include<stdio.h>
#include<string.h>
int main()
{
	char str[30];
	int i;
	printf("Enter a string:");
	scanf("%[^\n]",str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==' ')
		{
			str[i]='*';
		}
		else if( (str[i]>=48) && (str[i]<=57) )
		{
			str[i]='?';
		}
		else if( (str[i]>=65) && (str[i]<=91) )
		{
			str[i]=str[i]+32;
		}
		else if( (str[i]>='a') && (str[i]<='z') )
                {
                        str[i]=str[i]-32;
                }
	}
	printf("%s\n",str);
	return 0;
}	

			
