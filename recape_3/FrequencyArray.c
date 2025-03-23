#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int n,m;scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int cnt[1000+1]={0};

    for(int i=0;i<n;i++)
    {
        cnt[a[i]]++;
    }
    for(int i=1;i<=m;i++)
    { printf("%d\n",cnt[i]); }
}

