#include<stdio.h>
#include<stdlib.h>
 void main()
{
int max,*arr,n,i;
printf("\nEnter how many elements in the list: ");
scanf("%d",&n);
arr=(int *)malloc(n*4);
if(arr==NULL)
{
	printf("Out of memory\n");
	printf("Press any key to close\n");
	exit(0);
}
printf("Enter elments\n");
for(i=0;i<n;i++)
{
	scanf("%d",&arr[i]);
}

max = arr[1];
for(i=0;i<n;i++)
{

if(arr[i] > max)
max = arr[i];
}

printf("\nThe maximum element in array is = %d",max);
}