#include<stdio.h>
#include<math.h>
int main()
{
	int n,i;// local variables
	int sum;
	printf("enter the values");
	scanf("%d",&n);
	sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum+pow(-1,1)*i;

		
		printf("\n\tthe i value would be %d term is %d  the sum is %d",i,(int)pow(-1,i)*i,sum);

		

	
	}
	int r;
		r=sum; //return the total sum
		printf("\n the final sum is %d \n",r);
	
return 0;
}