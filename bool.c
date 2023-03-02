#include<stdio.h>
#include<stdbool.h>
bool ram(int ivalue)
{
    if((ivalue % 2)==0)
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
auto int ivalue=0;
bool hello=NULL;
printf("Enter the number is \n");
scanf("%d",&ivalue);
hello=ram(ivalue);
if(hello==true)
{
    printf("Even number\n");

}
else
{
printf("old number\n");
}



    return 0;
}