#include<stdio.h>
#include<limits.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]<=10) { printf("A[%d] = %d\n",i,a[i]); }
    }
}