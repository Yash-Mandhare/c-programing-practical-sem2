#include <stdio.h>

int main() {
    int i,a[4];
    char * countries[]={"India","Australia","America","Ukrain"};
    char * capitals[]={"Delhi","New york","Kiv","Canberra"};
    printf("\nCountries and Capitals\n ");
    printf("__________________________\n");
    for(i=0;i<4;i++)
    printf("%d.%-10s\t\t%d.%s\n", i+1,countries[i],i+1,capitals[i]);
    printf("Match the countries and capital:\n");
    printf("\n Enter only serial nos\n");
    printf("________________________\n");
    for(i=0;i<4;i++)
    {
        printf("capital of  %d is at\t",i+1);
        scanf("%d",&a[i]);
    }
    printf("________________________\n");
    for(i=0;i<4;i++)
    {
        printf("%-11s is capital of %s\n",capitals[a[i]-1],countries[i]);
    }
    
    return 0;
}

/* output:
Countries and Capitals
 __________________________
1.India     		1.Delhi
2.Australia 		2.New york
3.America   		3.Kiv
4.Ukrain    		4.Canberra
Match the countries and capital:
Enter only serial nos
________________________
capital of  1 is at	1
capital of  2 is at	4
capital of  3 is at	2
capital of  4 is at	3
________________________
Delhi       is capital of India
Canberra    is capital of Australia
New york    is capital of America
Kiv         is capital of Ukrain
*/