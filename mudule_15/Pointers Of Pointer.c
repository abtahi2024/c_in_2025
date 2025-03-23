#include<stdlib.h>
int main()
{
    int a=10;
    int *x=&a;
    int **y=&x;
    printf("%d",**y);
}