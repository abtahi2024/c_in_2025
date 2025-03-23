#include<stdio.h>

int main()
{
    int a[111]={1,2,4,5};
    int *p=a;
    printf("addrecs:%d value:%d",&a[0],*p);
    printf("\n");
    printf("%d ",*(p+2));
    return 0;
}