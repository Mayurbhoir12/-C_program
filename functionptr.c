#include<stdio.h>
int addition(int A,int B)
{
int ret=0;
ret= A+B;
return ret;
}
int (*fptr)(int A1,int B2 );

{
fptr=fun();

   return 0;
}

int main()
{
    int No1=10;
    int No2=20;
    int ans=0;
    ans=addition(No1,No2);
    printf("addition:%d\n",ans);
     
     fptr();
    printf("%d\n",fptr);a



return 0;
}