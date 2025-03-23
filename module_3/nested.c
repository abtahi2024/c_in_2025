#include<stdlib.h>
#include<stdio.h>
int main()
{
    for(int i=1;i<=3;i++)
    {
        for(int j=0;j<=5;j++)
        { printf("%d %d",j,i); }
        printf("\n");
    }
    int sum=0;
    for(char i='a';i<='z';i++)
    { printf("%d ",i);;}
    for(int i=0;i<10;i++)
    {
        printf("%d + %d =",sum,i);
        sum+=i;
        printf("%d\n",sum);
    }
    printf("answer : %d",sum);
    for(int i=0;i<=5;i++)
    {
        if(i%2==0)
        { printf("Even :%d\n",i); }
        else
        { printf("odd :%d\n",i); }
    }
}