#include<stdio.h>
#include<stdbool.h>
bool checkeven(int iNo)
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
bool bRet;
printf("Enter the number:\n");
scanf("%d",&ivalue);
bRet=checkeven(ivalue);
if(bRet==true)
{
    printf("even\n");

}


else
{
printf("old\n");
}

    return 0;

}