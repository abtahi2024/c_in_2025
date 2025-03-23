#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char s,q;
    int a,b,c;scanf("%d %c %d %c %d",&a,&s,&b,&q,&c);
	if(q!='=')
	{ return 0; }
    switch(s)
    {
        case'+':
        if(a+b==c)
        { printf("Yes"); }
        else
        { printf("%d",a+b); }
        break;
        case'-':
        if(a-b==c)
        { printf("Yes"); }
        else
        { printf("%d",a-b); }
        break;
        case'*':
        if(a*b==c)
        { printf("Yes"); }
        else
        { printf("%d",a*b); }
        break;
		default:
		break;
    }
    return 0;
}