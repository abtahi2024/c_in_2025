#include<stdio.h>
#include<string.h>
int main()
{
    char a[100];scanf("%s",&a);
    int fqe[26]={0};
    for(int i=0;i<strlen(a);i++)
    {
        int idx=a[i]-'a';
        fqe[idx]++;
    }
    int count_of_string=0;
    for(int i=0;i<26;i++)
    { 
        if(fqe[i])
        { printf("%c %d\n",i+'a',fqe[i]); }
     }

    printf("\n");
    for(int i=0;i<26;i++)
    { 
        if(fqe[i])
        { count_of_string++; }
    }
    printf("%d",count_of_string);
}