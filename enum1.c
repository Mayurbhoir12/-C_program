#include<stdio.h>
enum day{x,xx=3,xxx,xxxx,xxxxx};
int main()
{

enum day obj;
printf("%d\n",sizeof(obj));
printf("%d\n",xx);
printf("%d\n",xxxxx);
    return 0;
}