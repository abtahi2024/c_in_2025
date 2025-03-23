// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int n;scanf("%d",&n);
//     int space=n-1,ster=1;
//     for(int i=1;i<=2*n;i++)
//     {
//         for(int j=1;j<=space;j++)
//         { printf(" "); }
//         for(int j=1;j<=ster;j++)
//         { printf("*"); }
//         printf("\n");
//         if(i<n)
//         { space--; ster+=2; }
//         else if(i>n)
//         { space++; ster-=2; }
//     }
//     return 0;
// }

#include<stdio.h>
int main()
{
    int n;scanf("%d",&n);
    int k=1;
    for(int i=1;i<=n;i++,k+=2)
    {
        int s=n-i;
        while(s--)
        { printf(" "); }
        for(int j=1;j<=k;j++)
        { printf("*"); }
        printf("\n");
    }
    k-=2;
    for(int i=n;i>=1;i--,k-=2)
    {
        int s=n-i;
        while(s--)
        { printf(" "); }
        for(int j=1;j<=k;j++)
        { printf("*"); }
        printf("\n");
    }

    return 0;
}