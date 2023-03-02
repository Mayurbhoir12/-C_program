#include<stdio.h>
void Hello()
{
static int CC=90;
CC++;
printf("value is :%d\n",CC);


}
int main()
{
Hello();
Hello();
Hello();

    return 0;

}