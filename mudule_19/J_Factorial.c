#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<stdbool.h>
long long int factorial(int n)
{
    if(n==0){ return 1; }
    return n*factorial(n-1);
}
void print()
{
    long long int n;scanf("%lld",&n);
    printf("%lld",factorial(n));
}
int main()
{
    print();
    return 0;
}