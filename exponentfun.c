#include<stdio.h>
float exp1(float x,int n);
int main()
{
int n;
float x;
printf("enter x,n: ");
scanf("%f%d",&x,&n);
printf("%f^%d = %f\n",x,n,exp1(x,n));
}

float exp1(float x,int n)
{
	float r;
if(n==0)return 1.0;
else 
	r= x*exp1(x,n-1);
	return r;
}
