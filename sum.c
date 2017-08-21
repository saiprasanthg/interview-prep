#include<stdio.h>
int main()
{
	int n,i;
	int sum;
	printf("enter the values");
	scanf("%d",&n);
	sum=0;
	for(int i=0;i<=n;i++)
	{
		sum=sum+i;
		
		printf("\n\tthe i value would be %d\n \t the sum is %d",i,sum);

		

	
	}
	int r;
		r=sum;
		printf("\n the final sum is %d \n",r);
	
return 0;
}