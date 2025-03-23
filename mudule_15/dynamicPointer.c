#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main()
{
    int *a=(int *)malloc(5*sizeof(int));
    // int *a=(int *)calloc(sizeof(int),sizeof(int));
    for(int i=0;i<5;i++)
    { a[i]=i+1; }
    
    for(int i=0;i<5;i++)
    { printf("%d ",a[i]); }
    printf("\n");
    
    int *tpm=a;
    a=(int *)realloc(a,10*sizeof(int));
    if(a==NULL)
    { a=tpm; }
    for(int i=5;i<10;i++)
    { a[i]=i+1; }

    for(int i=0;i<10;i++)
    { printf("%d ",a[i]); }
    return 0;
}