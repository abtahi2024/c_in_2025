#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdbool.h>
int main()
{
    char s;int a,b;scanf("%d %c %d",&a,&s,&b);
    if((s=='<'&&a<b)||(s=='>'&&a>b)||(s=='='&&a==b))
    { printf("Right"); }
    else
    { printf("Wrong"); }
}