#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    int mn=0,mx=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<a[mn])
        { mn=i; }
        if(a[i]>a[mx])
        { mx=i; }
    }
    int tmp=a[mn];
    a[mn]=a[mx];
    a[mx]=tmp;
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
}