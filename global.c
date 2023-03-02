#include<stdio.h>
void Demo()
{

auto int A=10;
A--; //increment the value by one
printf("value from  Demo is:%d\n",A);

}
void Hello()
{

static int B=20;
B++;
printf("value from Hello is :%d\n",B);

}

int main()
{
Demo(); // function cal
Demo(); //function call
Demo();
Hello();
Hello();
Hello();

 return 0;
}