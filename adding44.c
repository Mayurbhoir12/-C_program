#include<stdio.h>
int x=10;

void Demo()
{
int A=22;
printf("value from Demo %d\n",A);
printf("value form Demo %d\n",x);
}
int main()
{
int B=33;
printf("value from main %d\n",B);
printf("value from main %d\n",x);
 Demo();
return 0;


}