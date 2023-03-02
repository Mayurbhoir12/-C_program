#include<stdio.h>
int Addition(int iNo1,int iNo2)
{


int ians=0;
ians=iNo1+iNo2;
return ians;

}

int  main()
{
   auto int ivalue1=0,ivalue2=0;
  auto  int iRet=0;
  printf("Enter first number\n");
  scanf("%d",&ivalue1);
  printf("Enter seconf number\n");
  scanf("%d",&ivalue2);
  iRet=Addition(ivalue1,ivalue2);
  printf("Addition is :%d\n",iRet);
  
  return 0;
}