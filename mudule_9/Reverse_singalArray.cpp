#include<stdio.h>

int main()
{
    int n;scanf("%d",&n);
    int a[n],b[n];
    for(int i=0;i<n;i++)
    { scanf("%d",&a[i]); }
    int i=0,j=n-1;
    while(i<j)
    {
        int tpm=a[i];
        a[i]=a[j];
        a[j]=tpm;
        i++;j--;
    }
    // for(int i=0;i<=j;i++)
    // {
    //     int tmp=a[i];
    //     a[i]=a[j];
    //     a[j]=tmp;
    //     j--;
    // }
    for(int i=0;i<n;i++)
    { printf("%d ",a[i]); }
    return 0;
}