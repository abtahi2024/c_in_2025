#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    double val;scanf("%lf",&val);
    // int ruslt=ceil(val);
    int ruslt=floor(val);
    printf("%d\n",ruslt);
    printf("%lf\n",round(val));
    printf("%lf\n",sqrt(val));
    printf("%lf\n",pow(val,2));
    printf("%d",(int)pow(val,2));
    return 0;
}