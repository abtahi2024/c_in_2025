#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int space=n-1,space2=0;
    int star=1,star2=(2*n)-1;
    for(int i=1;i<=2*n;i++)
    {
        for(int j=1;j<=space;j++)
        { printf(" "); }
        for(int j=1;j<=star;j++)
        { printf("*");}
        printf("\n");
        if(i<n)
        { space--; star+=2; }
        else if(i>n)
        {space++;star-=2;}
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=space2;j++)
    //     { printf(" "); }
    //     for(int j=1;j<=star2;j++)
    //     { printf("*");}
    //     printf("\n");
    //     space2++;
    //     star2-=2;
    // }
    return 0;
}