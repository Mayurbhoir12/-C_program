#include<stdio.h>
struct Demo
{
int a;
float f;
double d;



};
union hello
{
int a;
float f;
double d;


};
int main()
{
struct Demo obj;
union hello obj1;

obj.a=11;
obj.f=33.44;
obj.d=99.88;



obj1.a=11;


printf("%d\n",obj1.a);
printf("%f\n",obj1.f);

return 0;
}