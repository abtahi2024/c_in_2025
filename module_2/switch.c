#include<stdio.h>
#include<stdbool.h>
int main()
{
    int a,b;scanf("%d %d",&a,&b);
    switch (a)
    {
    case 1:
        printf("satday\n");
        break;
    case 2:
        printf("sunday\n");
        break;
    case 3:
        printf("manday\n");
        break;
    case 4:
        printf("tustday\n");
        break;
    
    default:
        printf("ignor day");
        break;
    }
}