#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    bool ok=1;
    if(a!=b)
    { ok=1; }
    else
    { ok=0; }
    printf("%d",ok);
}