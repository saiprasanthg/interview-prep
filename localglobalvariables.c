#include<stdio.h>
int number;   //global variable
int main()
{
number=10;
int i=20;// local variable or auto variable
printf("the value of i is %d",i);
printf("I am in function main. My value is %d\n",number);
  
return 0;  
}
