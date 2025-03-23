#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    if(a<50)
    { printf("Bay 4 egg\n"); }
    else if(a<60)
    { printf("Bay 3 egg\n"); }
    else
    { printf("Bay 2 egg\n"); }
}