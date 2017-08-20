#include<stdio.h>
int max(int num1,int num2);// function declaration//

int main()
{
	int x;//local variables
	int y;
	int res;
	printf("enter the x and y values");
	scanf("%d",&x);

	scanf("%d",&y);

	res= max(x,y);// calling a function to get max value
	printf( "Max value is : %d\n", res );
return 0;
}

int max(int num1,int num2) //function definition

{							// function body
	int result;		

	if(num1>num2)
	
	result=num1;
	
	else
	result=num2;
	
	return result;
}