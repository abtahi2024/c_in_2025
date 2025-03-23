#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
int main()
{
    int col,row;scanf("%d %d",&col,&row);
    int a[col][row];
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        { scanf("%d",&a[i][j]); }
    }
    bool flag=true;
    // if(col!=row)
    // { flag=false; }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            if(i==j)
            {
                if(a[i][j]!=a[0][0])
                { flag=false; }
            }
            else if(a[i][j]!=0)
            { flag=false; }
        }
    }
    if(flag)
    { printf("Scalar matrix"); }
    else
    { printf("Not Scalar matrix"); }
    return 0;
}