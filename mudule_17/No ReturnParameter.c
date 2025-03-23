#include<stdio.h>
void fun(int a,int b)
{
    printf("%d\n",a+b);
}
void charctor(char c)
{
    if('a'<=c&&c<='z')
    { printf("LOWER"); }
    else { printf("UPER"); }
}
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    char c;scanf("%c",&c);
    fun(a,b);
    charctor('A');
}