#include<stdio.h>
struct Demo
{
int a;
float b;
double c;


};
union hello
{
int a;
float b;
double c;



};
int main()
{
struct  Demo xx;
union hello xxx;
xx.a=10;
xx.b=12.22;
xx.c=89.99;
xxx.a=10;
printf("%d\n",sizeof(xx));
printf("%d\n",sizeof(xxx));
printf("%d\n",xxx.a);
printf("%d\n",xxx.b);
printf("%lf\n",xxx.c);


    return 0;
}


