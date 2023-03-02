#include<stdio.h>
int multiplication(int No1,int No2)
{
int Ret=0;
Ret=No1 * No2;
return Ret;
}
int main()
{
auto int No1=10;
auto int No2=20;
auto int ans=0;
ans=multiplication(No1,No2);
printf("multiplicaton is %d\n",ans);
return 0;
}