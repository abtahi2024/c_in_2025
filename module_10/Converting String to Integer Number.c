#include<stdio.h>
#include<string.h>
int main()
{
    int n;scanf("%d",&n);
    char s[222];scanf("%s",s);
    int num=0;
    for(int i=0;i<n;i++)
    {
        int digit=s[i]-'0';
        num=num*10+digit;
    }
    printf("%d",num);
}