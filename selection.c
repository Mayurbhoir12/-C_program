#include<stdio.h>
#include<stdbool.h>

//% mod
// == Equality
  bool CheckEven(int iNo)
 {

if((iNo % 2)==0)
{
return true;
}
else
{
return false;
}

 }
 int main()
 {
int ivalue=0;
bool bRet=0;
printf("Enter one number\n");
scanf("%d",&ivalue);

bRet=CheckEven(ivalue);

if(bRet ==true)
{

    printf("It is even number\n");

}
else
{

printf("It is odd number\n");
}
    return 0;
 }