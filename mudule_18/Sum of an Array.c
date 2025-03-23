#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
int a[1004],sum;
// void sumofarray(int i,int n)
int sumofarray(int i,int n)
{
    if(i==n){ return 0; }
    return a[i]+=sumofarray(i+1,n);
}
int main()
{
    int n;scanf("%d",&n);
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    printf("%d", sumofarray(0,n));
    return 0;
}