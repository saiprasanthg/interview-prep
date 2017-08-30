#include<stdio.h>

#define MAX(x,y) ((x)>(y) ? (x) : (y)) // Macros with arguments must be defined using the #define directive before they can be used

int main(void)
{
	printf("Max between 20 and 10 is %d\n",MAX(10,20));
	return 0;
}