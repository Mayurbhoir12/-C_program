#include<stdio.h>
#pragma pack(3)
struct  smo
{
    int a;
    float  b;
    int q;
    char ch1;
};
    struct Demo
    {
     int X;
     int E;
     struct smo hobj


    };


int main()
{ 
    struct  Demo dobj;
    dobj.X=10;
    dobj.E=11;
    dobj.hobj.b=99.99;
dobj.hobj.a=78;
    dobj.hobj.ch1='M';
    dobj.hobj.q=44;
    
    printf("%d\n",sizeof(dobj));



return 0;
}