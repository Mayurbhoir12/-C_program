#include<stdio.h>
struct mmm
{
int A;
double d;
char c;


};
int main()
{
struct mmm obj;
obj.A=10;
obj.d=99.99;
obj.c='M';

printf("%d\n",sizeof(obj));
printf("%c\n",obj.c);
printf("%d\n",sizeof(obj.c));
    return 0;

}