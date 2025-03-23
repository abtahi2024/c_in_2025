#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
void PrintingNto1(int x,int n)
{
    if(x>n){ return; }
    PrintingNto1(x+1,n);
    printf("%d\n",x);
}
int main()
{
    int x,n;scanf("%d %d",&x,&n);
    PrintingNto1(x,n);
    return 0;
}