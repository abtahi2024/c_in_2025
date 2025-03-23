#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int fqe[10000]={0};
    for(int i=0;i<n;i++)
    { fqe[a[i]]=1; }
    for(int i=0;i<n;i++)
    { printf("%d %d\n",i,fqe[i]); }
    printf("\n");
    int m;scanf("%d",&m);
    for(int i=0;i<m;i++)
    {
        int x;scanf("%d",&x);
        if(fqe[x]==1)
        { printf("%d YES\n",i); }
        else
        { printf("%d NO\n",i); }
    }
    return 0;
}