#include<stdio.h>
struct hello
{
int *ip;
float  *fp;
double *df;



};

int main()
{
    
struct hello  obj;


printf("size of :%d\n",sizeof(obj));

   return  0;
}