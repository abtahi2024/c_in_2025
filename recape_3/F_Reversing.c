#include<stdio.h>
#include<limits.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=1;i<=n;i++)
    { scanf("%d",&a[i]); }
    int mn=INT_MAX;
    for(int i=n;i>=1;i--)
    {
        if(a[i]<=mn)
        { printf("%d ",a[i]); }
    }
}