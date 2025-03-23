#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    int sum=0;
    do
    {
        sum+=n%10;
        n/=10;
    }
    while(0<n);
    printf("%d",sum);
    
}