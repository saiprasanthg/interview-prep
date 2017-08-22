#include<stdio.h>
#include<time.h>
void getSeconds(unsigned long *par); // function declaration//

int main()
{
	unsigned long sec;
	getSeconds(&sec); // it has the address as a  parameter

	printf("the number of seconds: %lu\n ", sec);
	return 0;

}

void getSeconds(unsigned long *par)
{
	*par=time(NULL);
	return;
}