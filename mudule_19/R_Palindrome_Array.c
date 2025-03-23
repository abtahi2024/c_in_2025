#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int ispalindrom(int *a,int start, int end)
{

    if(start>=end)
    { return true; }
    return a[start]==a[end]&&ispalindrom(a,start+1,end-1);
}
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    if(ispalindrom(a,0,n-1))
    { printf("YES"); }
    else
    { printf("NO"); }
    return 0;
}