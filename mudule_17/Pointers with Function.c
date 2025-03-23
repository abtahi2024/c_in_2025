#include<stdio.h>
void sawp(int *x,int *y)
{
    int tmp=*x;
    *x=*y;
    *y=tmp;
    printf("%d %d",*x,*y);
}
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    sawp(&a,&b);
}