#include<stdio.h>

int fibonacci(int i) {
	if( i==0)
	{
	return 0;
	}
	if(i==1)
	{
	return 1;
	}
return fibonacci(i-2)+fibonacci(i-1);
}

int main(){
	int i;
	int n;
	printf("the value of n is");
	scanf("%d",&n);
	
   for (i = 0; i < n; i++) {
      printf("%d\t\n", fibonacci(i));
   }
	
   return 0;
}