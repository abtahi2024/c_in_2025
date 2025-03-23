#include<stdio.h>
#include<string.h>
int main()
{
    int n,m;scanf("%d %d",&n,&m);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int cnt[100005]={0};
    // for(int i=0;i<n;i++)
    // {
    //     cnt[a[i]]++; 
    // }
    int i=0;
    while(i<n)
    { cnt[a[i]]++; i++; }
    for(int i=1;i<=m;i++)
    { printf("%d\n",cnt[i]); }
    return 0;
}