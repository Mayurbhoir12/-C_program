#include<stdio.h>

 //type def JUNA_NAV   NEWIN_NAv
 typedef int INTEGER;
 typedef unsigned long int UNLONG;
 struct Demo
 {
    int a;
    int b;
 };
typedef struct Demo DEMO;
typedef struct Demo *PDEMO;
 int main()
 {
    INTEGER i=10; //int i=10
    UNLONG j=21; //unsigned long int =21;
    DEMO obj;//struct Demo obj;
    PDEMO ptr=&obj;//struct Demo*ptr=&obj



    return 0;
 }