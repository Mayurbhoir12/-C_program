#include<stdio.h>
void Demo()
{
auto int iNo=10;
iNo++;
printf("value of :%d\n",iNo);

}
void Hello()
{

static int iNo2=999;
iNo2++;
printf("value of:%d\n",iNo2);
}
int main()
{
Demo();
Demo();
Demo();
Hello();
Hello();
Hello();



    return 0;
}