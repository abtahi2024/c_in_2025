#include<stdio.h>
void Print1ToN(int x,int n)
{
    if(x>n){ return; }
    printf("%d ",x);
    Print1ToN(x+1,n);
}
int main()
{
    int x,n;scanf("%d %d",&x,&n);
    Print1ToN(x,n);
}