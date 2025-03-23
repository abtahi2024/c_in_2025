#include<stdio.h>
int a,b;
void scop()
{
    printf("%p %p\n",&a,&b);   
}

int main()
{
    scop();
    // int a,b;scanf("%d %d",&a,&b);
     printf("%p %p\n",&a,&b);  
}