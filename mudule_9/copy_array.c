#include<stdio.h>
int a[1000],b[1000];
int main()
{
    int n,m;scanf("%d",&n);
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    m=n;//copy the lenth
    for(int i=0;i<n;i++)
    {
        b[i]=a[i];//copy that a[i] to b[i] array.
    }
    for(int i=0;i<m;i++)
    { printf("%d ",b[i]); }
}