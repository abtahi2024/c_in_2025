#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[100];
    scanf("%[^\n]s",&b);
    strcpy(a,b);
    printf("%s ",a);
}