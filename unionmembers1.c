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
	printf("data.i: %d\n",data.i);// here we print each value unlike the previous example//
	data.f=22.5;
	printf("data.f: %f\n",data.f);//
	strcpy(data.s,"c programming"); 
	printf("data.s: %s\n",data.s);// so we get each member printed//
return 0;
}