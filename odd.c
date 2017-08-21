#include<stdio.h>
int main()
{
	int n,i;// local variables
	int sum;
	printf("enter the values");
	scanf("%d",&n);
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+2*i-1;
		
		printf("\n\tthe i value would be %d the term is %d the sum is %d",i,2*i-1,sum);

		

	
	}
	int r;
		r=sum; //return the total sum
		printf("\n the final sum is %d \n",r);
	
return 0;
}