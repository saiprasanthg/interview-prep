#include<stdio.h>
#include<string.h>
union Data{
	int i;
	float f;
	char s[20];
};

int main()
{
	union Data data;

	data.i=5; //assigning value to the members of union
	data.f=22.5;
	strcpy(data.s,"c programming");

	printf("data.i: %d\n",data.i);
	printf("data.f: %f\n",data.f);
	printf("data.s: %s\n",data.s);

}