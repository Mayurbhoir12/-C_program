#include<stdio.h>
void Hello()
{


 register int BB=45;
 BB++;
 printf("value is :%d\n",BB);
}
int main()
{
Hello();
Hello();
Hello();



    return 0;

}