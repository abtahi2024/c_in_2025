#include<stdio.h>
int main()
{
    int m;scanf("%d",&m);
    if(m>=80&&m<=100)
    { printf("you have A+\n"); }
    else if(m>=70&&m<=79)
    { printf("you have A\n"); }
    else if(m>=60&&m<=69)
    { printf("you have A-\n"); }
    else if(m>=50&&m<=59)
    { printf("you have B+\n"); }
    else if(m>=40&&m<=49)
    { printf("you have B\n"); }
    else if(m>=30&&m<=39)
    { printf("you have B-\n"); }
    else if(m>=20&&m<=29)
    { printf("you have C\n"); }
    else
    { printf("you have fail"); }
}