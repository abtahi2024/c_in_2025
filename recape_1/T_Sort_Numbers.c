#include<stdio.h>
int main()
{
    int a,b,c,mn,mx;scanf("%d %d %d",&a,&b,&c);
    if(a<=b&&a<=c)
    { mn=a; }
    else if(b<=b&&b<=c)
    { mn=b; }
    else
    { mn=c; }
    if(a>b&&a>c)
    { mx=a; }
    else if(b>=a&&b>=c)
    { mx=b; }
    else
    { mx=c; }
    int mid=a+b+c-mn-mx;
    printf("%d\n%d\n%d\n\n",mn,mid,mx);
    printf("%d\n%d\n%d",a,b,c);
}