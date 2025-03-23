#include<stdio.h>
void calling(int r,int x)
{
    if(r==6)
    { return;}
    printf("%d ",r);
    calling(r+1,x);
}
int main()
{
    
    calling(1,5);
}