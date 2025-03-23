#include<stdio.h>
int main()
{
    int n,x;scanf("%d",&n);
    int even=0,odd=0,pos=0,nag=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        { even++; }
        else
        { odd++; }
        if(x>0)
        { pos++; }
        else if(x<0)
        { nag++; }
    }
    printf("EVEN:%2d\nODD:%2d\nPositive:%2d\nNagative:%2d\n",even,odd,pos,nag);
}