#include<stdio.h>
#include<stdlib.h>
int main()
{
	int *p,*q,j,i,n,a=0,sum=0;
	float avg;
	printf("\n\nEnter no of elements\t");
	scanf("%d",&n);
	printf("\n\nEnter elements \n");
	p=(int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	for(i=0;i<n;i++)
	{
		if(*(p+i)!=0)
		a+=1;
	}
	q=(int*)malloc(a*sizeof(int));
	for(i=0,j=0;i<n;i++)
	{
		if(*(p+i)!=0)
		{
			*(q+j)=*(p+i);
			j++;
		}
	}
	for(i=0;i<j;i++)
	sum+=*(q+i);
	avg=sum/j;
	printf("\n\nSum is:\t\t%d\nAverage is:\t%.2f\n\n",sum,avg);
	free(p);
	free(q);
	return 0;
}