#include<stdio.h>
int Addition(int iNo1,int iNo2)
{
int ret=0;
ret= iNo1+iNo2;
return ret;



}


int main()
{
    auto int iNo1=0;
   auto  int iNo2=0;
    auto int iDemo=0;
    printf("Enter thr  first  Number \n");
    scanf("%d",&iNo1);
printf("Enter the second Number\n");
scanf("%d",&iNo2);
iDemo=Addition(iNo1,iNo2);
printf("Addition is:%d",iDemo);




    return 0;
}