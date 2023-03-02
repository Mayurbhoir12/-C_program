#include<stdio.h>
struct Demo
{
int A; //4
int B;//4
float f;//4
double d;//8

};
int main()
{
struct Demo obj;
struct Demo obj1;
struct Demo obj3;
struct Demo obj4;

obj.A=10;
obj1.B=30;
obj3.f=10.02;
obj4.d=99.99;
printf("size of obj:%d\n",sizeof(obj));
printf("size of :%d\n",(sizeof(obj1)));
printf("i is  the  %d\n",obj3);
printf("%lf\n",obj4.d);




return 0;
}