#include<stdio.h>
void count(int[],int,int*,int*);
int main()
{
	int count1=0,count2=0,arr[20],n,i;
	printf("\n\nEnter no of elements\t");
	scanf("%d",&n);
	printf("\n\nEnter elements of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	count(arr,n,&count1,&count2);
	printf("\n\nNo of Even integers:\t%d\nNo of Odd integers:\t%d\n\n",count1,count2);
	return 0;
}
void count(int arr[20],int n,int *count1,int *count2)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(arr[i]%2==0)
		*count1+=1;
		else
		*count2+=1;
	}
}
