#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int idx;scanf("%d",&idx);
    for(int i=idx;i<n-1;i++)
    { a[i]=a[i+1]; }
    n--;
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
}