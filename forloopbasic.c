#include<stdio.h>
int main()
{
	int n,i;
	int count=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		printf("the loop would be %d\n",i );
		count=count+i;
		printf("the count is %d",count );
	}

}