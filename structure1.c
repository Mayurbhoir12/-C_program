#include<stdio.h>
//structure declaration
//there is no memmory allpcation at this point
struct Demo
{
int i;
float f;
int j;
double d;


};

int main()
{
    struct Demo obj1;
    struct Demo obj2;
    struct Demo obj3;
     
     obj1.d=11.0;
     obj2.i=21;
     obj3.j=51;
     printf("sizee ofobj1:%d\n",sizeof(obj1));
     printf("size of obj2:%d\n",sizeof(obj2));
     printf("i obj2 is %d\n",obj2.i);



    return 0;
}