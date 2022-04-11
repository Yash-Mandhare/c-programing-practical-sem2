#include<stdio.h>
int main()
{
	int f1,f2,f3,n;
	f1=f2=f3=n=0;
	printf("Enter any no:");
	scanf("%d",&n);
	parameter(n,&f1,&f2,&f3);
	if(f1==1)
	{	
		printf("Number is even\n");
	}
	if(f2==1)
	{
		printf("Number is prime\n");
	}
	if(f3==1)
	{
		printf("Number is divisible by 3 or 7\n");
	}
	return 0;
}
void parameter(int n,int *even,int *prime,int *div)
{
	int i=0;
	if(n%2==0) *even=1;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			*prime=0;
			break;
		}
		*prime=1;
	}
	if(n%3==0 || n%7==0)
	{
		*div=1;
	}
}

	
