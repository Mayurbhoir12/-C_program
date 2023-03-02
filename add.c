#include<stdio.h>
int addition(int A,int B)
{

auto int Ret=0;
Ret=A+B;
return Ret;
}
void Demo()
{
auto int X=99;
X++;
printf("isndide the function %d\n",X);
static float  Z=88;
Z++;

    printf("inside the function\n%f\n",Z);
}


int main()
{
auto int A=10,B=20;
auto int ans=0;
ans =addition(10,20);
printf("%d\n",ans);
Demo();
Demo();
Demo();
Demo();


    return 0;
}