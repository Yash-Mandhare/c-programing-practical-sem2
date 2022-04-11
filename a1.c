#include<stdio.h>
void time(int*,int*,int*,int);
int main()
{
	int hr,min,sec,a;
	printf("\n\nEnter hr, min & sec\t");
	scanf("%d%d%d",&hr,&min,&sec);
	printf("\n\nEnter sec to increment\t");
	scanf("%d",&a);
	printf("\n\nBefore increment : \n\n\thr:%d\tmin:%d\tsec:%d\n\n",hr,min,sec);
	time(&hr,&min,&sec,a);
	printf("\n\nAfter increment : \n\n\thr:%d\tmin:%d\tsec:%d\n\n",hr,min,sec);
	return 0;
}
void time(int *hr,int *min,int *sec,int a)
{
	int b=0,c=0;
	if(a>=60)
	{
		b=a/60;
		a=a%60;
		if(b>=60)
		{
			c=b/60;
			b=b%60;
		}
	}
	*hr+=c;
	*min+=b;
	*sec+=a;
	if(*sec>59||*min>59)
	{
		if(*sec>59)
		{
			*min+=*sec/60;
			*sec=*sec%60;
		}
		if(*min>59)
		{
			*hr+=*min/60;
			*min=*min%60;
		}
	}
}
