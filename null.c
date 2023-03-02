#include<stdio.h>

int main()
{
auto int iNo1=80;
auto int iNo2=99;
auto int iNo3=77;
int *p=NULL;
p=&iNo1;


printf("%d\n",*p);
p=&iNo2;
printf("%d\n",*p);
return 0;
}