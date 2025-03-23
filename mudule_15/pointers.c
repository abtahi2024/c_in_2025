#include<stdio.h>
int main()
{
    int a=5,b=4;
    int *x=&a,*y=&b;
    int tmp=*x;
    *x=*y;
    *y=tmp;
    printf("%d %d",*x,*y);
}