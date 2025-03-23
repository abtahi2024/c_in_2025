#include<stdio.h>
#include<stdlib.h>
int main()
{
    int col,row;scanf("%d %d",&col,&row);
    int a[col][row];
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        { scanf("%d",&a[i][j]); }
    }
    
    a[2][3]=10;
    a[2][2]=20;
    a[2][1]=30;
    a[2][0]=40;

    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        { printf("%d ",a[i][j]); }
        printf("\n");
    }

}