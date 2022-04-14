#include<stdio.h>
void main()
{
    int a=10, b=20;
    void swap1(int x,int y);
    void swap2(int *ptr1, int *ptr2);

    printf("\n Before sawpping: a=%d,b=%d",a,b);
    swap1(a,b);
    printf("\n After swapping by swap1:a=%d,b=%d",a,b);
    swap2(&a, &b);
    printf("\n After swapping by swap2:a=%d,b=%d",a,b);
}
void swap1(int x, int y)
{
    int temp;
    temp = x ;
    x=y;
    y=temp;
}
void swap2(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1= *ptr2;
    *ptr2 = temp;
}