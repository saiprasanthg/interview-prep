#include<stdio.h>
int gcd(int m, int n);// function declaration
						
int main()
{
	int m,n;// local variables
printf("enter m,n: ");
scanf("%d%d",&m,&n);
printf("gcd(%d,%d) = %d\n",m,n,gcd(m,n));
return 0;
}

int gcd(int m,int n) //function definition
{
	if(m%n==0)
	return n;
	else return gcd(n,m%n);
}