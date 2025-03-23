#include<stdio.h>
#include<math.h>
int main()
{
    int n;scanf("%d",&n);
    int year=n/365;n%=365;
    int month=n/30;n%=30;
    int day=n;
    printf("%d years\n%d months\n%d days\n",year,month,day);
}