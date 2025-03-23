#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];scanf("%s",a);
    // int i=0,j=strlen(a)-1;
    // while(i<=j)
    // {
    //     char t=a[i];
    //     a[i]=a[j];
    //     a[j]=t;
    //     i++;j--;
    // }
    // printf("%s",a);
    printf("%s",strrev(a));
    return 0;
}