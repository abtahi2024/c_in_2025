#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        { scanf("%d",&a[i][j]); }
    }
    int primary=0,secondry=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==j)
            { primary+=a[i][j]; }
            if(i+j==n-1)
            { secondry+=a[i][j]; }
        }
    }
    printf("%d",abs(primary-secondry));

    return 0;
}