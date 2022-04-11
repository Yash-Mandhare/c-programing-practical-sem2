#include<stdio.h>
main()
{
int max,min,*arr,n,i,range;
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
min = arr[1];
max = arr[1];
for(i=0;i<n;i++)
{
if(arr[i] < min)
min = arr[i];
if(arr[i] > max)
max = arr[i];
}
range = max - min;
printf("\nThe range = %d",range);
}
 
