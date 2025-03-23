#include<stdio.h>
int main()
{
    int n=100;
    char s[n];
    // scanf("%[^\n]s",&s);string ar space chsho input neta paraa.

    fgets(s,sizeof(s),stdin);
    // fputs(s,stdout);//ai tar madhoma print kora jae.
    printf("%s",s); 
}