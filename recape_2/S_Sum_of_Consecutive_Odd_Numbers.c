#include<stdio.h>
#include<stdlib.h>
int main()
{
    int t;scanf("%d",&t);
    while(t--)
    {
        int x,y;scanf("%d %d",&x,&y);
        int sum=0;
        if(x>y)
        {
            int tmp=x;
            x=y;
            y=tmp;
        }
        for(int i=x+1;i<y;i++)
        {
            if(i%2==1)
            { sum+=i; }
        }
        printf("%d\n",sum); 
    }
}