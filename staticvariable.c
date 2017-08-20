#include<stdio.h>
void test();   //Function declaration 
 
int main()
{
 test();
 test();
 test();
 return 0;
}
void test()
{
 static int a = 0;        //Static variable
 a = a+1;
 printf("%d\n",a);
}