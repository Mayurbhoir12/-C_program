#include<stdio.h>
int main()
{
int Arr[4]={10,20,30,40};
printf("%d\n",Arr[0]);     //10
printf("%d\n",sizeof(Arr));//16
printf("%d\n",sizeof(Arr[2]));//4
printf("%d\n",&(Arr[2]));//108
printf("%d\n",Arr);//100
printf("%d\n",&Arr);//100 
printf("%d\n",(Arr[0]));//10
 return 0;
}