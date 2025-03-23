#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
void mul(int x,int *y)
{
    x*=10;
    (*y)*=10;
}
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    mul(a,&b);
    printf("%d %d",a,b); 
    return 0;
}