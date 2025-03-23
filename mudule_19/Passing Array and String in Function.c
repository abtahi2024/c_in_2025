// #include<stdio.h>
// #include<stdlib.h>
// #include<stdbool.h>
// #include<string.h>
// #include<ctype.h>
// void upercase(char a[])
// {
//     // a[0]=toupper(a[0]);
//     // a[1]=toupper(a[1]);
//     // a[2]=toupper(a[2]);
//     // a[3]=toupper(a[3]);
//     // a[4]=toupper(a[4]);
//     for(int i=0;i<strlen(a);i++)
//     { a[i]=toupper(a[i]); }
//     printf("%s",a);
// }
// int main()
// {
//     char a[20]="programmin";
//     upercase(a);
//     return 0;
// }
#include <stdio.h>
int main()
{
int ary[4] = {1, 2, 3, 4};
int *p;
p = ary + 3;
*p = 5;
printf("%d\n", ary[3]);
}
