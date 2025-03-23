#include<stdio.h>
#include<string.h>
int main()
{
    char a[200]="air";
    char b[200]="apple";
    // scanf("%s %s",&a,&b);
    int c=strcmp(b,a);
    printf("%d",c);
    return 0;
}