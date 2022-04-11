#include<stdio.h>
int main()
{
	int arr[20],n,*p,i;
	printf("\n\nEnter no of elements\t");
	scanf("%d",&n);
	printf("\n\nEnter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	p=&arr[i-1];
	printf("\n\nElements in reverse order\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p-i));
	}
	printf("\n\n");
	return 0;
}

 
