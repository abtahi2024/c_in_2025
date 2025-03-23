#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
void modefi(int *x)
{
    for(int i=0;i<5;i++)
    { printf("%d ",x[i]); }
}
void fun(char *x)
{
    x[0]='g';
    printf("%s",x);
}
int main()
{
    int a[10]={1,2,3,4,5};
    char x[20]="apple";
    modefi(a);
    printf("\n");
    fun(x);
    return 0;
}