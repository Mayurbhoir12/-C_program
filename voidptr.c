#include<stdio.h>
int main()
{
auto char c='M';
auto int i=10;
auto float f=10.10;
auto double d=90.90;

char *cp=&c;
int *ip=&i;
float *fp=&f;
double *dp=&d;


void *vp=&c;
vp=&i;

printf("data refer by%c\n",*(char *)vp);

printf("data refer by :%d\n",*(int *)vp);
vp=&f;
printf("data refer by:%f\n",*(float *)vp);

vp=&d;
printf("data refer by :%lf\n",*(double*)vp);
return 0;
}