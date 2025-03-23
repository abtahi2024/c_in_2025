#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;scanf("%d",&t);
    for(int j=0;j<t;j++)
    {
        long long n;scanf("%lld",&n);
        long long sum=1;
        for(int i=1;i<=n;i++)
        {
            sum*=i;
        }
        printf("%lld\n",sum);
    }
}