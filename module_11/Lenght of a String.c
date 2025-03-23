#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];
    scanf("%[^\n]s",&a);
    int lenght=strlen(a);
    // for(int i=0;a[i]!='\0';i++)
    // { lenght++; }
    printf("%d",lenght);
}