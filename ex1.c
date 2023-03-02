#include<stdio.h>
extern int A;
extern int B;
extern void Hello();

int main()
{
Hello();
printf("value of:%d\n",A);
printf("value of:%d\n",B);


    return 0;
}