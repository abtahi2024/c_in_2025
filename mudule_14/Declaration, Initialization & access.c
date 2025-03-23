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
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        { printf("%d ",a[i][j]); }
        printf("\n");
    }

}
//row 5 col 3
// i
// ↓
// 2 3 4 5 1 ←j
// 4 2 5 1 6
// 1 2 3 4 5