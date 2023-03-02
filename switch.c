#include<stdio.h>
int main()
{

int number=0;
printf("enter thr no\n");
scanf("%d",&number);
switch(number)
{
    case 1:
    printf("mayur\n");
    break;
    case 2:
    printf("sanket\n");
    break;
    case 3:
    printf("apeksha\n");
    break;
    case 4:
    printf("bittu\n");
    break;
    default :
    printf("sorry\n");
    break;
}

return 0;
}