#include<stdio.h>

struct ppa
{

    int Arr[4];//16

    float Brr[2];//8
    

};
int main()//
{
struct ppa obj;


obj.Arr[0]=10;
obj.Arr[1]=20;
obj.Arr[2]=30;
obj.Arr[3]=40;
obj.Brr[0]=99.33;
obj.Brr[1]=88.44;
obj.Brr[2]=77.55;
printf("size of :%d\n",sizeof(obj));
printf("%d\n",obj.Arr);
printf("%d\n",obj.Arr[2]);
printf("%d\n",obj.Arr[0]);
printf("size of Brr:%d\n",sizeof(obj.Brr));
printf("%d\n",obj.Brr);
printf("adddres of:%d\n",&obj.Arr);


    return 0;
}