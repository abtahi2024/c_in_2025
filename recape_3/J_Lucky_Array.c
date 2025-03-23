#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];int mn=INT_MAX,cnt=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<mn)
        { mn=a[i]; }
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==mn)
        { cnt++; }
    }
    if(cnt%2==0)
    { printf("Unlucky"); }
    else
    { printf("Lucky"); }
    return 0;

}