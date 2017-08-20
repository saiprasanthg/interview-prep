#include<stdio.h>
//variable  decalaration
extern int a,b;
extern int c;
extern float f;

int main()
{
	/*variable definition: */
	int a,b;
	int c;
	float f;
	/*actual initilization */
	a=100;
	b=200;

	c=a+b;
	printf("value of c: %d \n", c);

	f=28.40/7.0;
	printf("value of c: %f \n", f);
	/* code */
	return 0;
}
