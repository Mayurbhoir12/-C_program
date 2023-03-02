#include<stdio.h>
int main()
{
int no1=99;
int no2=88;
int no3=77;
int *p=NULL;
p=&no1;
printf("%d\n",*p);
p=&no2;
printf("%d\n",*p);
p=&no3;
printf("%d\n",*p);





    return 0;
}